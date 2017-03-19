
struct _RTL_CRITICAL_SECTION_DEBUG {
	uint16_t	Type;
	uint16_t	CreatorBackTraceIndex;
	struct _RTL_CRITICAL_SECTION	*CriticalSection;
	struct _LIST_ENTRY	ProcessLocksList;
	uint32_t	EntryCount;
	uint32_t	ContentionCount;
	uint32_t	Flags;
	uint16_t	CreatorBackTraceIndexHigh;
	uint16_t	SpareUSHORT;
}__attribute__((packed));
