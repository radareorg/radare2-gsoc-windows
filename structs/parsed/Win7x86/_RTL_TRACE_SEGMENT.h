
struct _RTL_TRACE_SEGMENT {
	uint32_t	Magic;
	struct _RTL_TRACE_DATABASE	*Database;
	struct _RTL_TRACE_SEGMENT	*NextSegment;
	uint32_t	TotalSize;
	struct Char	*SegmentStart;
	struct Char	*SegmentEnd;
	struct Char	*SegmentFree;
}__attribute__((packed));
