
struct _HEAP_ENTRY_EXTRA {
	uint16_t	AllocatorBackTraceIndex;
	uint16_t	TagIndex;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint64_t	Settable;
	uint64_t	ZeroInit;
	uint64_t	ZeroInit1;
}__attribute__((packed));
