
struct _HANDLE_TABLE_FREE_LIST {
	struct _EX_PUSH_LOCK	FreeListLock;
	struct _HANDLE_TABLE_ENTRY	*FirstFreeHandleEntry;
	struct _HANDLE_TABLE_ENTRY	*LastFreeHandleEntry;
	int32_t	HandleCount;
	uint32_t	HighWaterMark;
}__attribute__((packed));
