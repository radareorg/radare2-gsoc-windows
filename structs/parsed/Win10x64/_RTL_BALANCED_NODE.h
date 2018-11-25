
/* *Right */
#define	Red	0x00000001
#define	Balance	0x00000003

struct _RTL_BALANCED_NODE {
	union {
		struct _RTL_BALANCED_NODE	*Children[2];
		struct _RTL_BALANCED_NODE	*Left;
	};
	struct _RTL_BALANCED_NODE	*Right;
	uint64_t	ParentValue;
}__attribute__((packed));
