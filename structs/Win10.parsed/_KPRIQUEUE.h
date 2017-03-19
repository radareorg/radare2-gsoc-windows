struct _KPRIQUEUE {
	struct _DISPATCHER_HEADER	Header;
	struct _LIST_ENTRY	EntryListHead[32];
	int32_t	CurrentCount[32];
	uint32_t	MaximumCount;
	struct _LIST_ENTRY	ThreadListHead;
}__attribute__((packed));
