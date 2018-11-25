
struct _LFH_HEAP {
	struct _RTL_SRWLOCK	Lock;
	struct _LIST_ENTRY	SubSegmentZones;
	void	*Heap;
	void	*NextSegmentInfoArrayAddress;
	void	*FirstUncommittedAddress;
	void	*ReservedAddressLimit;
	uint32_t	SegmentCreate;
	uint32_t	SegmentDelete;
	uint32_t	MinimumCacheDepth;
	uint32_t	CacheShiftThreshold;
	uint64_t	SizeInCache;
	struct _HEAP_BUCKET_RUN_INFO	RunInfo;
	struct _USER_MEMORY_CACHE_ENTRY	UserBlockCache[12];
	struct _HEAP_LFH_MEM_POLICIES	MemoryPolicies;
	struct _HEAP_BUCKET	Buckets[129];
	struct _HEAP_LOCAL_SEGMENT_INFO	*SegmentInfoArrays[129];
	struct _HEAP_LOCAL_SEGMENT_INFO	*AffinitizedInfoArrays[129];
	struct _SEGMENT_HEAP	*SegmentAllocator;
	struct _HEAP_LOCAL_DATA	LocalData[1];
}__attribute__((packed));
