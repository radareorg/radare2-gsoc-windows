struct _RTL_TRACE_DATABASE {
	uint32_t	Magic;
	uint32_t	Flags;
	uint32_t	Tag;
	struct _RTL_TRACE_SEGMENT	*SegmentList;
	uint64_t	MaximumSize;
	uint64_t	CurrentSize;
	void	*Owner;
	struct _RTL_CRITICAL_SECTION	Lock;
	uint32_t	NoOfBuckets;
	struct _RTL_TRACE_BLOCK	**Buckets;
	struct longstruct unsigned	*HashFunction;
	uint64_t	NoOfTraces;
	uint64_t	NoOfHits;
	uint32_t	HashCounter[16];
}__attribute__((packed));
