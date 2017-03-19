#!/usr/bin/env python
'''
Converts dumped variables from WinDbg that use the following command:
    dt ntdll!_PEB

Ideally this script should be used with the output files created by
    pykd_ntdll_variable_dumper.py

'''


import os
import sys


def convert_type(t):
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
    if t == 'Void':
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


def parse_struct(name, data):
    mbrs = data.split('\n')[:-1]
    struct = []
    defines = []
    current_offset = 0
    for i in range(0, len(mbrs)):
        mbr = mbrs[i]
        offset, mbr_name, raw_type = split_member(mbr)

        # If offsets match we hit a define, or union
        if offset == current_offset and len(struct) > 0:
            if 'Pos' in raw_type:
                pos, bit = raw_type.split(',')
                pos = int(pos.split()[1])
                bit = int(bit.split()[0])
                defines.append((mbr_name, int('1'*bit, 2)<<pos))
            else:
                print('Found a union, eww')
        else:
            # Work backwards :)
            raw_type = list(reversed(raw_type.split()))
            struct_mbr = []
            for elem in raw_type:
                c_type = convert_type(elem)
                struct_mbr.append(c_type)

            # Handle arrays
            if '[' in struct_mbr[-1] and ']' in struct_mbr[-1]:
                struct_mbr[-1] = mbr_name+struct_mbr[-1]
            else:
                struct_mbr.append(mbr_name)

            struct.append(struct_mbr)

        current_offset = offset
    return ((name, struct), defines)


# TODO: Remove and output to file
def pretty_print(data):
    name, struct = data
    print('struct %s {' % name)
    for member in struct:
        line = ''
        for elem in member:
            line += '\t'+elem
        print(line+';')
    print('}__attribute__((packed));')


def pretty_print_1(data):
    for mbr in data:
        name, value = mbr
        print('#define\t%s\t0x%.08x' % (name, value))
    print('')


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
        if os.path.isfile(file_path) and '.swp' not in file_path:
            fp = open(file_path, 'r')
            data = fp.read()
            fp.close()
            name = f.split('!')[1].split('.')[0]
            struct, defines = parse_struct(name, data)
            pretty_print_1(defines)
            pretty_print(struct)


if __name__ == "__main__":
    main()
