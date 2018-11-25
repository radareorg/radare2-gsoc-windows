
struct _HEAP_LOCAL_SEGMENT_INFO {
	struct _HEAP_SUBSEGMENTstruct Ptr32	Hint;
	struct _HEAP_SUBSEGMENTstruct Ptr32	ActiveSubsegment;
	struct _HEAP_SUBSEGMENTstruct Ptr32	CachedItems[16];
	struct _SLIST_HEADER	SListHeader;
	struct _HEAP_BUCKET_COUNTERS	Counters;
	struct _HEAP_LOCAL_DATAstruct Ptr32	LocalData;
	uint32_t	LastOpSequence;
	uint16_t	BucketIndex;
	uint16_t	LastUsed;
}__attribute__((packed));
