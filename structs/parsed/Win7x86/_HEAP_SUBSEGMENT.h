
struct _HEAP_SUBSEGMENT {
	struct _HEAP_LOCAL_SEGMENT_INFO	*LocalInfo;
	struct _HEAP_USERDATA_HEADER	*UserBlocks;
	struct _INTERLOCK_SEQ	AggregateExchg;
	uint16_t	BlockSize;
	uint16_t	Flags;
	uint16_t	BlockCount;
	uint8_t	SizeIndex;
	uint8_t	AffinityIndex;
	uint32_t	Alignment[2];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _SINGLE_LIST_ENTRY	SFreeListEntry;
	uint32_t	Lock;
}__attribute__((packed));
