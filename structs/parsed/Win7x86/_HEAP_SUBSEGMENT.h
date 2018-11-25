
struct _HEAP_SUBSEGMENT {
	struct _HEAP_LOCAL_SEGMENT_INFOstruct Ptr32	LocalInfo;
	struct _HEAP_USERDATA_HEADERstruct Ptr32	UserBlocks;
	struct _INTERLOCK_SEQ	AggregateExchg;
	uint16_t	BlockSize;
	uint16_t	Flags;
	uint16_t	BlockCount;
	uint8_t	SizeIndex;
	uint8_t	AffinityIndex;
	uint32_t	Alignment[2];
	struct _SINGLE_LIST_ENTRY	SFreeListEntry;
	uint32_t	Lock;
}__attribute__((packed));
