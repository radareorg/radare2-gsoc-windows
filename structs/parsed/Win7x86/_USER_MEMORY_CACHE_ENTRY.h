
struct _USER_MEMORY_CACHE_ENTRY {
	struct _SLIST_HEADER	UserBlocks;
	uint32_t	AvailableBlocks;
}__attribute__((packed));
