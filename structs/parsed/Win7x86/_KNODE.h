
struct _KNODE {
	struct _SLIST_HEADER	PagedPoolSListHead;
	struct _SLIST_HEADER	NonPagedPoolSListHead[3];
	struct _GROUP_AFFINITY	Affinity;
	uint32_t	ProximityId;
	uint16_t	NodeNumber;
	uint16_t	PrimaryNodeNumber;
	uint8_t	MaximumProcessors;
	uint8_t	Color;
	struct _flags	Flags;
	uint8_t	NodePad0;
	uint32_t	Seed;
	uint32_t	MmShiftedColor;
	uint32_t	FreeCount[2];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _CACHED_KSTACK_LIST	CachedKernelStacks;
	int32_t	ParkLock;
	uint32_t	NodePad1;
}__attribute__((packed));
