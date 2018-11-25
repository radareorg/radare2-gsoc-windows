
struct _RTL_TRACE_DATABASE {
	uint32_t	Magic;
	uint32_t	Flags;
	uint32_t	Tag;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _RTL_TRACE_SEGMENT	*SegmentList;
	uint64_t	MaximumSize;
	uint64_t	CurrentSize;
	void	*Owner;
	struct _RTL_CRITICAL_SECTION	Lock;
	uint32_t	NoOfBuckets;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _RTL_TRACE_BLOCK	**Buckets;
	struct longstruct unsigned	*HashFunction;
	uint64_t	NoOfTraces;
	uint64_t	NoOfHits;
	uint32_t	HashCounter[16];
}__attribute__((packed));
