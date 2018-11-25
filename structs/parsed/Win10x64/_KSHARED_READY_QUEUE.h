
struct _KSHARED_READY_QUEUE {
	uint64_t	Lock;
	uint32_t	ReadySummary;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _LIST_ENTRY	ReadyListHead[32];
	struct Char	RunningSummary[64];
	uint8_t	Span;
	uint8_t	LowProcIndex;
	uint8_t	QueueIndex;
	uint8_t	ProcCount;
	uint8_t	ScanOwner;
	uint8_t	Spare[3];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint64_t	Affinity;
}__attribute__((packed));
