
struct _HEAP_ENTRY_EXTRA {
	uint16_t	AllocatorBackTraceIndex;
	uint16_t	TagIndex;
	uint32_t	Settable;
	uint64_t	ZeroInit;
}__attribute__((packed));
