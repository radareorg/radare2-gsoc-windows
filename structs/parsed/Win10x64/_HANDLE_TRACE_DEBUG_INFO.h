
struct _HANDLE_TRACE_DEBUG_INFO {
	int32_t	RefCount;
	uint32_t	TableSize;
	uint32_t	BitMaskFlags;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _FAST_MUTEX	CloseCompactionLock;
	uint32_t	CurrentStackIndex;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _HANDLE_TRACE_DB_ENTRY	TraceDb[1];
}__attribute__((packed));
