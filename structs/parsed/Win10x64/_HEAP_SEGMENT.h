
struct _HEAP_SEGMENT {
	struct _HEAP_ENTRY	Entry;
	uint32_t	SegmentSignature;
	uint32_t	SegmentFlags;
	struct _LIST_ENTRY	SegmentListEntry;
	struct _HEAP	*Heap;
	void	*BaseAddress;
	uint32_t	NumberOfPages;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _HEAP_ENTRY	*FirstEntry;
	struct _HEAP_ENTRY	*LastValidEntry;
	uint32_t	NumberOfUnCommittedPages;
	uint32_t	NumberOfUnCommittedRanges;
	uint16_t	SegmentAllocatorBackTraceIndex;
	uint16_t	Reserved;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _LIST_ENTRY	UCRSegmentList;
}__attribute__((packed));
