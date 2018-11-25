
struct _RTL_TRACE_SEGMENT {
	uint32_t	Magic;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _RTL_TRACE_DATABASE	*Database;
	struct _RTL_TRACE_SEGMENT	*NextSegment;
	uint64_t	TotalSize;
	struct Char	*SegmentStart;
	struct Char	*SegmentEnd;
	struct Char	*SegmentFree;
}__attribute__((packed));
