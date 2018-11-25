#!/usr/bin/env python
'''
Converts dumped variables from WinDbg that use the following command:
    dt ntdll!_PEB

Ideally this script should be used with the output files created by
    pykd_ntdll_variable_dumper.py

Description:
    Didn't want to use any external libs so everything remotely complex is
    handled through the power of tuples. They are in the form:
    (offset, type, name, data) where 'offset' is a number 'type' and 'name' are
    strings and 'data' is an array.

TODO:
    1. Handle Assumptions
    2. Handle Enums
    3. Handle Bit Maps `Pos X, X Bit`
'''


import os
import sys

def type_sizes(t):
    if 'int8_t' in t:
        return 1
    if 'int16_t' in t:
        return 2
    if 'int32_t' in t:
        return 4
    if 'int64_t' in t:
        return 8
    return None # Cause an error for now


def convert_type(t):
    if t == 'Float':
        return 'float'
    if t == 'Int2B':
        return 'int16_t'
    if t == 'Int4B':
        return 'int32_t'
    if t == 'Int8B':
        return 'int64_t'
    if t == 'Ptr32':
        return '*'
    if t == 'Ptr64':
        return '*'
    if t == 'UChar':
        return 'uint8_t'
    if t == 'Uint2B':
        return 'uint16_t'
    if t == 'Uint4B':
        return 'uint32_t'
    if t == 'Uint8B':
        return 'uint64_t'
    if t == 'Void' or t == 'void':
        return 'void'
    if '[' in t and ']' in t:
        return t
    # If unknown we are probably a struct?!
    return 'struct '+t


def split_member(mbr):
    left, right = mbr.split(' : ')
    (offset, mbr_name) = left.split()
    offset = int(offset.strip('+'), 16)
    return offset, mbr_name, right


def parse_define_member(offset, mbr_name, raw_type):
    pos, bit = raw_type.split(',')
    pos = int(pos.split()[1])
    bit = int(bit.split()[0])
    return ((offset, '#define', mbr_name, int('1'*bit, 2)<<pos))


def parse_struct_member(offset, mbr_name, raw_type):
    raw_type = list(reversed(raw_type.split()))
    n = mbr_name
    t = ''
    for elem in raw_type:
        c_type = convert_type(elem)
        if '[' in c_type and ']' in c_type:
            n = n+c_type
        elif '*' in c_type:
            n = c_type+n
        else:
            t += c_type
    return ((offset, t, n, None))


def parse_variable(data):
    data = data.split('\n')[:-1]
    mbrs = []
    for i in range(0, len(data)):
        mbr = data[i]
        o, n, t = split_member(mbr)
        if 'Pos' in t: # Defines
            define_mbr = parse_define_member(o, n, t)
            mbrs += [define_mbr]
        else:
            struct_mbr = parse_struct_member(o, n, t)
            mbrs += [struct_mbr]
    return mbrs


def format_data(name, data):
    buf = ''

    # Defines
    o_prev = -1
    temp = []
    for i in range(0, len(data)):
        o, t, n, d = data[i]
        if t == '#define':
            if not o == o_prev:
                buf += '\n'
                op, tp, np, dp = data[i-1]
                buf += '/* %s */\n' % (np)
            buf += "%s\t%s\t0x%.08X\n" % (t, n, d)
            o_prev = o
        else:
            temp += [data[i]]
    buf += '\n'

    # Discard defines
    data = temp

    # Stucts and Unions
    union = 0
    buf += 'struct %s {\n' % (name)
    for i in range(0, len(data)):
        padding = 0
        o, t, n, d = data[i]
        on = -1
        if i+1 < len(data):
            on, tn, nn, dn = data[i+1]
        if o == on and not union:
            buf += "\tunion {\n"
            union = 1
        if union:
            buf += '\t\t%s\t%s;\n' % (t, n)
        else:
            buf += '\t%s\t%s;\n' % (t, n)
        # Align ints
        if "int" in t:
            offset_diff = on - o - type_sizes(t)
            for i in range(0, offset_diff):
                buf += '\tuint8_t\t__padding%s__;\n' % padding
                padding += 1
        if not o == on and union:
            buf += "\t};\n"
            union = 0
    buf += '}__attribute__((packed));\n'

    return buf


def main():
    if len(sys.argv) < 3:
        print('Usage: %s input_dir output_dir' % sys.argv[0])
        exit()

    input_dir = sys.argv[1]
    output_dir = sys.argv[2]

    if not os.path.exists(input_dir):
        print('Input directory does not exist!')
        exit()

    if not os.path.exists(output_dir):
        os.makedirs(output_dir)

    for f in os.listdir(input_dir):
        file_path = os.path.join(input_dir, f)
        if os.path.isfile(file_path) and '.raw' in file_path and not '.swp' in file_path:
            try:
                fp = open(file_path, 'r')
                data = fp.read()
                fp.close()
                name = f.split('!')[1].split('.')[0]
                buf = format_data(name, parse_variable(data))
                fp = open(os.path.join(output_dir, name+'.h'), 'w')
                fp.write(buf)
                fp.close()
            except Exception as err:
                print('Error: Ignoring file: %s' % file_path)
                print(err)


if __name__ == "__main__":
    main()
