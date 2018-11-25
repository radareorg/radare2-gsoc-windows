
struct _HANDLE_TRACE_DEBUG_INFO {
	int32_t	RefCount;
	uint32_t	TableSize;
	uint32_t	BitMaskFlags;
	struct _FAST_MUTEX	CloseCompactionLock;
	uint32_t	CurrentStackIndex;
	struct _HANDLE_TRACE_DB_ENTRY	TraceDb[1];
}__attribute__((packed));
