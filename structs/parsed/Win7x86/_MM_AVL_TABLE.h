
/* BalancedRoot */
#define	DepthOfTree	0x0000001F
#define	Unused	0x000000E0
#define	NumberGenericTableElements	0xFFFFFF00

struct _MM_AVL_TABLE {
	struct _MMADDRESS_NODE	BalancedRoot;
	voidstruct Ptr32	NodeHint;
	voidstruct Ptr32	NodeFreeHint;
}__attribute__((packed));
