
struct _CACHED_KSTACK_LIST {
	struct _SLIST_HEADER	SListHead;
	int32_t	MinimumFree;
	uint32_t	Misses;
	uint32_t	MissesLast;
	uint32_t	Pad0;
}__attribute__((packed));
