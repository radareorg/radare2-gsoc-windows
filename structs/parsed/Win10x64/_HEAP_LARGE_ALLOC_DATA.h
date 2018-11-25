
/* VirtualAddress */
#define	UnusedBytes	0x0000FFFF

/* UnusedBytes */
#define	ExtraPresent	0x00000001
#define	Spare	0x00000FFE
#define	AllocatedPages	0xFFFFFFFFFFFFF000

struct _HEAP_LARGE_ALLOC_DATA {
	struct _RTL_BALANCED_NODE	TreeNode;
	uint64_t	VirtualAddress;
}__attribute__((packed));
