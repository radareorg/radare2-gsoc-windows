#!/usr/bin/env python
'''
Converts dumped variables from WinDbg that use the following command:
    dt ntdll!_PEB

Ideally this script should be used with the output files created by
    pykd_ntdll_variable_dumper.py

Description:
    Didn't want to use any external libs so everything remotely complex is
    handled through the power of tuples. They are in the form:
    (type, name, data) where 'type' and 'name' are strings and 'data' is an
    array.
'''


import os
import sys


def convert_type(t):
    if t == 'Float':
        return 'float'
    if t == 'Int2B':
        return 'int16_t'
    if t == 'Int4B':
        return 'int32_t'
    if t == 'Int8B':
        return 'int64_t'
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
    return (('#define', mbr_name, int('1'*bit, 2)<<pos))


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
    return ((t, n, None))


def parse_variable(name, data):
    mbrs = data.split('\n')[:-1]

    defines = []
    enums = []
    structs = []

    # Here we parse a struct, we have made an assumtion here!
    current_offset = 0
    prev_name = ''
    struct_mbrs = []
    i = 0
    while i < len(mbrs):
        mbr = mbrs[i]
        offset, mbr_name, raw_type = split_member(mbr)
        # If offsets match we hit a define, or union
        if offset == current_offset and i > 0:
            # Define
            if 'Pos' in raw_type:
                define_mbrs = []
                for j in range(i, len(mbrs)):
                    mbr = mbrs[j]
                    offset, mbr_name, raw_type = split_member(mbr)
                    if not offset == current_offset:
                        break
                    define_mbr = parse_define_member(offset, mbr_name, raw_type)
                    define_mbrs.append(define_mbr)
                defines.append((None, prev_name, define_mbrs))
                if j < len(mbrs)-1:
                    i = j-1
            # Unions
            else:
                union_mbrs = [struct_mbrs[-1]]
                for j in range(i, len(mbrs)):
                    mbr = mbrs[j]
                    offset, mbr_name, raw_type = split_member(mbr)
                    if not offset == current_offset:
                        break
                    union_mbr = parse_struct_member(offset, mbr_name, raw_type)
                    union_mbrs.append(union_mbr)
                struct_mbrs[-1] = (('union', None, union_mbrs))
                if j < len(mbrs)-1:
                    i = j-1
        else:
            struct_mbr = parse_struct_member(offset, mbr_name, raw_type)
            struct_mbrs.append(struct_mbr)
            current_offset = offset
            prev_name = mbr_name
        i += 1

    structs.append(('struct', name, struct_mbrs))

    return {'defines' : defines, 'enums' : enums, 'structs' : structs}


def format_data(data):
    buf = ''
    for define in data['defines']:
        t, n, d = define
        buf += '/* %s */\n' % (n)
        for mbr in d:
            t_mbr, n_mbr, d_mbr = mbr
            buf += "%s\t%s\t0x%.08X\n" % (t_mbr, n_mbr, d_mbr)
        buf += '\n'
    for enum in data['enums']:
        buf += '/* TODO: enums */\n'
    for struct in data['structs']:
        t, n, d = struct
        buf += '%s %s {\n' % (t, n)
        for mbr in d:
            t_mbr, n_mbr, d_mbr = mbr
            if t_mbr == 'union': # TODO: Recurse to handle nesting!
                buf += "\tunion {\n"
                for union in d_mbr:
                    t_mbr, n_mbr, d_mbr = union
                    buf += '\t\t%s\t%s;\n' % (t_mbr, n_mbr)
                buf += "\t};\n"
            else:
                buf += '\t%s\t%s;\n' % (t_mbr, n_mbr)
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
        if os.path.isfile(file_path) and '.raw' in file_path:
            try:
                fp = open(file_path, 'r')
                data = fp.read()
                fp.close()
                name = f.split('!')[1].split('.')[0]
                data = parse_variable(name, data)
                buf = format_data(data)
                fp = open(os.path.join(output_dir, name+'.h'), 'w')
                fp.write(buf)
                fp.close()
            except:
                print('Error: Ignoring file: %s' % file_path)


if __name__ == "__main__":
    main()
