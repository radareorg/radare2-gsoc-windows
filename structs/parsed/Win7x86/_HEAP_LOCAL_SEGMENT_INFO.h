
struct _HEAP_LOCAL_SEGMENT_INFO {
	struct _HEAP_SUBSEGMENT	*Hint;
	struct _HEAP_SUBSEGMENT	*ActiveSubsegment;
	struct _HEAP_SUBSEGMENT	*CachedItems[16];
	struct _SLIST_HEADER	SListHeader;
	struct _HEAP_BUCKET_COUNTERS	Counters;
	struct _HEAP_LOCAL_DATA	*LocalData;
	uint32_t	LastOpSequence;
	uint16_t	BucketIndex;
	uint16_t	LastUsed;
}__attribute__((packed));
