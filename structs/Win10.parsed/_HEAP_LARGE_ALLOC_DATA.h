/* VirtualAddress */
#define	UnusedBytes	0x0000FFFF

/* ExtraPresent */
#define	Spare	0x00000FFE
#define	AllocatedPages	0xFFFFFFFFFFFFF000

/* ExtraPresent */
#define	AllocatedPages	0xFFFFFFFFFFFFF000

struct _HEAP_LARGE_ALLOC_DATA {
	struct _RTL_BALANCED_NODE	TreeNode;
	uint64_t	VirtualAddress;
	struct Bitstruct 1struct 0,struct Pos	ExtraPresent;
}__attribute__((packed));
