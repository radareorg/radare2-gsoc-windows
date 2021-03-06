
struct _HEAP_LOCAL_SEGMENT_INFO {
	struct _HEAP_LOCAL_DATA	*LocalData;
	struct _HEAP_SUBSEGMENT	*ActiveSubsegment;
	struct _HEAP_SUBSEGMENT	*CachedItems[16];
	struct _SLIST_HEADER	SListHeader;
	struct _HEAP_BUCKET_COUNTERS	Counters;
	uint32_t	LastOpSequence;
	uint16_t	BucketIndex;
	uint16_t	LastUsed;
	uint16_t	NoThrashCount;
}__attribute__((packed));
