
struct _PS_PER_CPU_QUOTA_CACHE_AWARE {
	struct _LIST_ENTRY	SortedListEntry;
	struct _LIST_ENTRY	IdleOnlyListHead;
	uint64_t	CycleBaseAllowance;
	int64_t	CyclesRemaining;
	uint32_t	CurrentGeneration;
}__attribute__((packed));
