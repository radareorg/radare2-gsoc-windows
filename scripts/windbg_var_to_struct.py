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
        return 'unsigned char'
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


def parse_variable(data):
    members = data.split('\n')[:-1]
    c_members = []
    current_offset = 0
    for member in members:
        left, right = member.split(' : ')
        (offset, name) = left.split()
        offset = offset.strip('+')

        # Discard enums for now
        if 'Pos ' in right:
            continue

        # Work backwards :)
        t = list(reversed(right.split()))
        c_member = []
        for elem in t:
            data = convert_type(elem)
            c_member.append(data)

        # Handle arrays
        if '[' in c_member[-1] and ']' in c_member[-1]:
            c_member[-1] = name+c_member[-1]
        else:
            c_member.append(name)

        c_members.append(c_member)
    return c_members


# TODO: Remove and output to file
def pretty_print(c_members):
    print('struct _PEB {')
    for member in c_members:
        line = ''
        for elem in member:
            line += '\t'+elem
        print(line+';')
    print('}__attribute__((packed));')


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
            members = parse_variable(data)
            pretty_print(members)


if __name__ == "__main__":
    main()
