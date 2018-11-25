
struct _HEAP_ENTRY_EXTRA {
	uint16_t	AllocatorBackTraceIndex;
	uint16_t	TagIndex;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	Settable;
	uint64_t	ZeroInit;
	uint64_t	ZeroInit1;
}__attribute__((packed));
