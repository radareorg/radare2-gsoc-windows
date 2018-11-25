
/* FullSubsegmentList */
#define	IsBucket	0x00000001
#define	Spare0	0x000000FE

struct _HEAP_LFH_SUBSEGMENT_OWNER {
	uint8_t	BucketIndex;
	union {
		uint8_t	SlotCount;
		uint8_t	SlotIndex;
	};
	uint8_t	Spare1;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	AvailableSubsegmentCount;
	struct _RTL_SRWLOCK	Lock;
	struct _LIST_ENTRY	AvailableSubsegmentList;
	struct _LIST_ENTRY	FullSubsegmentList;
}__attribute__((packed));
