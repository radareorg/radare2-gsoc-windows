
struct _HEAP_PAGE_SEGMENT {
	struct _LIST_ENTRY	ListEntry;
	uint64_t	Signature;
}__attribute__((packed));
