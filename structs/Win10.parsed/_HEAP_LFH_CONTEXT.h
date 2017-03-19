
struct _HEAP_LFH_CONTEXT {
	void	*BackendCtx;
	struct _HEAP_SUBALLOCATOR_CALLBACKS	Callbacks;
	struct _RTL_SRWLOCK	SubsegmentCreationLock;
	uint8_t	MaxAffinity;
	uint8_t	*AffinityModArray;
	struct _HEAP_LFH_SUBSEGMENT_CACHE	SubsegmentCache;
	struct _HEAP_LFH_BUCKET	*Buckets[129];
}__attribute__((packed));
