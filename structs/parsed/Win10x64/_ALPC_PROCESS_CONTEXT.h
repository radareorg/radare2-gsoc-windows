
struct _ALPC_PROCESS_CONTEXT {
	struct _EX_PUSH_LOCK	Lock;
	struct _LIST_ENTRY	ViewListHead;
	uint64_t	PagedPoolQuotaCache;
}__attribute__((packed));
