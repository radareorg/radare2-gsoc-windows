
struct _RTL_TRACE_DATABASE {
	uint32_t	Magic;
	uint32_t	Flags;
	uint32_t	Tag;
	struct _RTL_TRACE_SEGMENT	*SegmentList;
	uint32_t	MaximumSize;
	uint32_t	CurrentSize;
	void	*Owner;
	struct _RTL_CRITICAL_SECTION	Lock;
	uint32_t	NoOfBuckets;
	struct _RTL_TRACE_BLOCK	**Buckets;
	struct longstruct unsigned	*HashFunction;
	uint32_t	NoOfTraces;
	uint32_t	NoOfHits;
	uint32_t	HashCounter[16];
}__attribute__((packed));
