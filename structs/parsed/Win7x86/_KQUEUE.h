
struct _KQUEUE {
	struct _DISPATCHER_HEADER	Header;
	struct _LIST_ENTRY	EntryListHead;
	uint32_t	CurrentCount;
	uint32_t	MaximumCount;
	struct _LIST_ENTRY	ThreadListHead;
}__attribute__((packed));
