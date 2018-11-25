
struct _RTL_TRACE_SEGMENT {
	uint32_t	Magic;
	struct _RTL_TRACE_DATABASEstruct Ptr32	Database;
	struct _RTL_TRACE_SEGMENTstruct Ptr32	NextSegment;
	uint32_t	TotalSize;
	struct Charstruct Ptr32	SegmentStart;
	struct Charstruct Ptr32	SegmentEnd;
	struct Charstruct Ptr32	SegmentFree;
}__attribute__((packed));
