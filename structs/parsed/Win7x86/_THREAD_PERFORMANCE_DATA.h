
struct _THREAD_PERFORMANCE_DATA {
	uint16_t	Size;
	uint16_t	Version;
	struct _PROCESSOR_NUMBER	ProcessorNumber;
	uint32_t	ContextSwitches;
	uint32_t	HwCountersCount;
	uint64_t	UpdateCount;
	uint64_t	WaitReasonBitMap;
	uint64_t	HardwareCounters;
	struct _COUNTER_READING	CycleTime;
	struct _COUNTER_READING	HwCounters[16];
}__attribute__((packed));
