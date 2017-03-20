# radare2-gsoc-windows
Various Brainstorming/scripts/ideas/etc. for the GSOC-Windows Task [[1]](http://rada.re/gsoc/2017/ideas.html#title_5)
 
# Proposals
  
Dumped from https://hackmd.io/CYYwjAHMwIYgtABkQdgKbwCwRAZngJzACsB8UmxuYAbAQGb15A==?both

## Fix


- [ ] Expose the function `r_bbin_mem_free` to remove the verbatim copy in `bin_mdmp.c:11`
- [ ] `r_bin_mdmp_get_paddr` will only resolve exact matches, but this function should become redundant [2]
- [ ] Fix missing Windows memory permissions `bin_mdmp.c:45`, depends on enhancements to the core.
- [ ] Fix pf inconsistencies in PE and add missing structures
- [ ] Fix MDMP not patching SizeOfRawData

## r2core Enhancements

- [ ] Incorrect parsing of wide strings, backslashes are displayed as underscores
* [ ] Integration between bin filetypes and the r2 debugger [1]
-- Show threads, registers, etc...
* [ ] Re-implement get_vaddr/allow binary plugins to provide the core with vaddr/paddr (`bin_mdmp.c:232`) [2]
* [ ] E as a byte in `pf` [3]
* [ ] General - Rethink sdb structure for additional types

## Enhancements

* [ ] Support of the autoloading needed PDBs for the imported dlls #3128
* [x] Add MDMP tests in TRAVIS-CI(radare2-extras)
* [ ] Adding it back to r2core [4]
* [ ] Resolve module names as well as vaddr when presenting data using the `i` commands (`bin_mdmp.c:156`)
* [ ] Improve maintainability: remove duplicated code taken from the PE format filetype - is this possible? (`mdmp_pe.c`) [4]
* [ ] Better presentation of data when viewing information using the `i` commands
-- Remove duplicates from `im` and `iS` (requires io and bin enhancements) [2]
    ```
    [Memory]

    0x00010000 +0x10000 -rw- paddr=0x0004bd60 state=0x00001000 type=0x00040000 allocation_protect=0x00000004 Memory_Section
    0x00020000 +0x2000 -r-- paddr=0x0005bd60 state=0x00001000 type=0x00040000 allocation_protect=0x00000002 Memory_Section
    0x00030000 +0x4000 -r-- paddr=0x0005dd60 state=0x00001000 type=0x00040000 allocation_protect=0x00000002 Memory_Section
    0x00040000 +0x2000 -r-- paddr=0x00061d60 state=0x00001000 type=0x00040000 allocation_protect=0x00000002 Memory_Section
    0x00050000 +0x1000 -rw- paddr=0x00063d60 state=0x00001000 type=0x00020000 allocation_protect=0x00000004 Memory_Section
    [snip]
    
    iS - *All Memory_Sections* should be removed*
    [Sections]
    idx=00 vaddr=0x00010000 paddr=0x0004bd60 sz=65536 vsz=65536 perm=m-rw- name=Memory_Section
    idx=01 vaddr=0x00020000 paddr=0x0005bd60 sz=8192 vsz=8192 perm=m-r-- name=Memory_Section_1
    idx=02 vaddr=0x00030000 paddr=0x0005dd60 sz=16384 vsz=16384 perm=m-r-- name=Memory_Section_2
    idx=03 vaddr=0x00040000 paddr=0x00061d60 sz=8192 vsz=8192 perm=m-r-- name=Memory_Section_3
    idx=04 vaddr=0x00050000 paddr=0x00063d60 sz=4096 vsz=4096 perm=m-rw- name=Memory_Section_4
    idx=05 vaddr=0x00060000 paddr=0x00064d60 sz=28672 vsz=28672 perm=m-r-- name=Memory_Section_5
    ```
    -- Improvements to `il`, `ie` `ir`, etc
    ```
    Current `il`
    [snip]
    [0x77680000] - api-ms-win-core-util-l1-1-0.dll
    [0x77680000] - api-ms-win-core-profile-l1-1-0.dll
    [0x77680000] - api-ms-win-security-base-l1-1-0.dll
    [0xfd620000] - ntdll.dll
    [0xfecc0000] - msvcrt.dll
    [0xfecc0000] - ntdll.dll
    [snip]
    
    Enhanced `il`
    [snip]
    [0x77680000 - C:\Windows\System32\kernel32.dll] - api-ms-win-core-util-l1-1-0.dll
    [0x77680000 - C:\Windows\System32\kernel32.dll] - api-ms-win-core-profile-l1-1-0.dll
    [0x77680000 - C:\Windows\System32\kernel32.dll] - api-ms-win-security-base-l1-1-0.dll
    [0xfd620000 - C:\Windows\System32\KERNELBASE.dll] - ntdll.dll
    [0xfecc0000 - C:\Windows\System32\advapi32.dll] - msvcrt.dll
    [0xfecc0000 - C:\Windows\System32\advapi32.dll] - ntdll.dll
    [snip]
    
    Current `ie`
    [Entrypoints]
    [snip]
    vaddr=0xff89b790 paddr=0x087984f0 baddr=0x00000000 laddr=0x00000000 haddr=0x0876ce68 type=program
    vaddr=0x778a1000 paddr=0x085b3d60 baddr=0x00000000 laddr=0x00000000 haddr=0x085b2e68 type=program
    vaddr=0x77695340 paddr=0x083af0a0 baddr=0x00000000 laddr=0x00000000 haddr=0x08399e68 type=program
    [snip]
    
    Enhanced `ie`
    [Entrypoints]
    [snip]
    vaddr=0xff89b790 paddr=0x087984f0 baddr=0x00000000 laddr=0x00000000 haddr=0x0876ce68 type=program bin=C:\Windows\explorer.exe
    vaddr=0x778a1000 paddr=0x085b3d60 baddr=0x00000000 laddr=0x00000000 haddr=0x085b2e68 type=program bin=C:\Windows\System32\ntdll.dll
    vaddr=0x77695340 paddr=0x083af0a0 baddr=0x00000000 laddr=0x00000000 haddr=0x08399e68 type=program bin=C:\Windows\System32\kernel32.dll
    [snip]
    
    Etc...
    ```
    -- Additional fields to `im` - don't everything to the name field [2]
    ```
    Current `im` (shown with imj)
    [snip]
    {"name":"paddr=0x0004bd60 state=0x00001000 type=0x00040000 allocation_protect=0x00000004 Memory_Section","size":65536,"address":65536,"flags":"-rw-"}
    [snip]
    
    Enhanced `im`
    [snip]
    {paddr":0x0004bd60, "state":0x00001000,  "type":0x00040000", "allocation_protect":0x00000004, "name":"Memory_Section","size":65536,"address":65536,"flags":"-rw-"}
    [snip]
    ```
    -- 'Real' Windows permissions that aren't mapped to Linux rwx model [2]
* [ ] Improve handling/performance of strings [2]
* [ ] Add flag (offset+size) of core Windows structures, i.e. PEB, TEB, KPCR, KPRCB
* [ ] Add pf defintion for core Windows structures i.e. `pf.peb @ peb`, `pf.teb @ teb` 
->  WinDbg debugger to extract all kernel data structures + `to` command to convert
* [ ] Enable existing PE specific pf structures (r2 -nn pf. doesn't show anything)
* [ ] Parse streams marked as TODO along with undocumented (`mdmp.c:345`)

## Extra

* [ ] Refactor PE file type code [5]
* [ ] Dump executable script https://www.zyantific.com/blog/dumping-packed-executables-using-minidumps/
-- Alex - Done - Might need to add unlinking of reloc and fixing of imagebase

# Reasoning

[1] A large majority of the MDMP format cannot be handled by r2 due to a lack of functionality within the core. Most of this stems from the inability for a `RBinPlugin` to communicate with the debugger. Thus preventing the ability to handle threads, registers, etc. Therefore an efficient and resonable change to the core is required to enable this communication.

[2] The `RBinSection` structure is sufficient for reversing but is not well suited to memory forensics. If we take this structure at face value then it is only really intended for sections within a binary, i.e. .text, .rodata, etc. This becomes an issue for coredumps where memory sections are just as important as the objects held within them. Now ideally the `RBinMem` structure should be sufficient for dealing with this problem, but this is not the case for a number of reasons: 

1. It was designed for use with ESIL
2. It lacks sufficient fields
3. It is not resolved between physical and virtual addressing

These caveats have resulted in a couple of hacks to make the MDMP plugin useable in its current state:

1. Memory sections are added to `RBinSection`, so that they can be resolved, allowing for work to be performed on them and the ability to view them in visual mode
2. Putting `RBinMem` in `RBinSection` results in the whole memory space being scanned for strings resulting in load times of at least 30mins. Fortunately this can be ignored with `-z`
3. Lack of fields in `RBinMem` means that the MDMP plugin repurposes the name field for its own purposes breaking the usability of the json (`imj`)

In theory all of these problems should be easy to resolve. A binary plugin should be able to overload the address resolving so that it can serve the `RBinMem` to the core instead of the `RBinSection`. This would allow for the removal of `RBinMem` from `RBinSection` solving the strings issue and the duplicated information issue. The lack of fields within `RBinMem` can be solved by... adding more fields to handle Windows and Linux memory structures.

[3] `pf` types do not seem to be as flexible as they should be. This needs fixing to solve some incorrect fields in the `pf` parsing within the MDMP plugin.

[4] Migrating to the r2core will allow for duplicate code to be removed that was required due to a lack of exposure.

[5] IMO the PE bin code is a mess and would not pass the current coding standards imposed by the style guideline. I am tempted to say that is should even be rewritten especially with the proposed projects in GSOC.

# Current Capability

## MDMP

- Supported plugin functions:
-- imports, info, libs, mem, relocs, sections, symbols
- Parses all PE binary formats found within the modules stream using the repective parsers in the core. This means that MDMP can populate the functions above
- Supported streams (that are viewable without `pf`):
-- MODULE_LIST_STREAM, MEMORY_LIST_STREAM, SYSTEM_INFO_STEAM, MEMORY64_LIST_STREAM, MEMORY_INFO_LIST_STREAM
- Full `pf` support for the structures that are parsed
