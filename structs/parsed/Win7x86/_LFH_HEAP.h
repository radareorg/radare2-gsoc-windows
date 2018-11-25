
struct _LFH_HEAP {
	union {
		struct _RTL_SRWLOCK	Lock;
		struct _RTL_CRITICAL_SECTION	padding;
	};
	struct _LIST_ENTRY	SubSegmentZones;
	uint32_t	ZoneBlockSize;
	void	*Heap;
	uint32_t	SegmentChange;
	uint32_t	SegmentCreate;
	uint32_t	SegmentInsertInFree;
	uint32_t	SegmentDelete;
	uint32_t	CacheAllocs;
	uint32_t	CacheFrees;
	uint32_t	SizeInCache;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _HEAP_BUCKET_RUN_INFO	RunInfo;
	struct _USER_MEMORY_CACHE_ENTRY	UserBlockCache[12];
	struct _HEAP_BUCKET	Buckets[128];
	struct _HEAP_LOCAL_DATA	LocalData[1];
}__attribute__((packed));
