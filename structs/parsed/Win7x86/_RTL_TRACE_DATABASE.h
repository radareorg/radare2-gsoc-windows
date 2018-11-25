
struct _RTL_TRACE_DATABASE {
	uint32_t	Magic;
	uint32_t	Flags;
	uint32_t	Tag;
	struct _RTL_TRACE_SEGMENTstruct Ptr32	SegmentList;
	uint32_t	MaximumSize;
	uint32_t	CurrentSize;
	voidstruct Ptr32	Owner;
	struct _RTL_CRITICAL_SECTION	Lock;
	uint32_t	NoOfBuckets;
	struct _RTL_TRACE_BLOCKstruct Ptr32struct Ptr32	Buckets;
	struct longstruct unsignedstruct Ptr32	HashFunction;
	uint32_t	NoOfTraces;
	uint32_t	NoOfHits;
	uint32_t	HashCounter[16];
}__attribute__((packed));
