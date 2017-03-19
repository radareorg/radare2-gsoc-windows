/* IsBucket */
#define	Spare0	0x000000FE

struct _HEAP_LFH_SUBSEGMENT_OWNER {
	struct Bitstruct 1struct 0,struct Pos	IsBucket;
	uint8_t	BucketIndex;
	union {
		uint8_t	SlotCount;
		uint8_t	SlotIndex;
	};
	uint8_t	Spare1;
	uint64_t	AvailableSubsegmentCount;
	struct _RTL_SRWLOCK	Lock;
	struct _LIST_ENTRY	AvailableSubsegmentList;
	struct _LIST_ENTRY	FullSubsegmentList;
}__attribute__((packed));
