
struct _HEAP_LOCAL_DATA {
	struct _SLIST_HEADER	DeletedSubSegments;
	struct _LFH_BLOCK_ZONE	*CrtZone;
	struct _LFH_HEAP	*LowFragHeap;
	uint32_t	Sequence;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _HEAP_LOCAL_SEGMENT_INFO	SegmentInfo[128];
}__attribute__((packed));
