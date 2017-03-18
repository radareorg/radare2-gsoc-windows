"""
Was going to write this in pure .wds but decided against it for multiple
reasons.  This is a rough crap implementation and will probably never be
improved as the goal is to get r2 to do all of the work with the help of
r2pipe.

Installation:
    1. Install python2 (because 3 does not work well :'( )
    2. Install pykd
    3. (Optional) Update pykd in WinDbg: !pykd.pip install --upgrade pykd

Usage:
    "C:\Program Files (x86)\Windows Kits\10\Debuggers\x64\windbg.exe" -z "C:\Windows\System32\ntdll.dll"
    .load pykd
    !py script.py output_dir
"""

import pykd
import os
import sys

if len(sys.argv) < 2:
    print 'Usage: %s output_dir' % sys.argv[0]
    exit()
output_dir = sys.argv[1]

if not os.path.exists(output_dir):
    os.makedirs(output_dir)

# Split to new line and drop the empty last line
variables = pykd.dbgCommand("dt ntdll!*").split('\n')[:-1]

# Dump the structures into the chosen output dir
for variable in variables:
    # Deal with the two styles of formatting
    variable = variable.split()
    variable_name = variable[0]
    if not len(variable) == 1:
        variable_name = variable[1]
    dump = pykd.dbgCommand("dt %s" % variable_name)

    if "Memory read error" in dump or "not found" in dump:
        continue

    # Strip WinDbg's stupid info message
    if "dtx is unsupported for this scenario" in dump:
        dump = "".join(dump.split('\n', 1)[1:])

    f = open(os.path.join(output_dir, variable_name), 'w')
    f.write(dump)
    f.close()
