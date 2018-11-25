
struct _USER_MEMORY_CACHE_ENTRY {
	struct _SLIST_HEADER	UserBlocks;
	uint32_t	AvailableBlocks;
	uint32_t	MinimumDepth;
	uint32_t	CacheShiftThreshold;
	uint16_t	Allocations;
	uint16_t	Frees;
	uint16_t	CacheHits;
}__attribute__((packed));
