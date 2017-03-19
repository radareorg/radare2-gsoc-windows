
struct _HEAP_VIRTUAL_ALLOC_ENTRY {
	struct _LIST_ENTRY	Entry;
	struct _HEAP_ENTRY_EXTRA	ExtraStuff;
	uint64_t	CommitSize;
	uint64_t	ReserveSize;
	struct _HEAP_ENTRY	BusyBlock;
}__attribute__((packed));
