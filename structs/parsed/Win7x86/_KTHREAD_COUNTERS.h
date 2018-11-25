
struct _KTHREAD_COUNTERS {
	uint64_t	WaitReasonBitMap;
	struct _THREAD_PERFORMANCE_DATA	*UserData;
	uint32_t	Flags;
	uint32_t	ContextSwitches;
	uint64_t	CycleTimeBias;
	uint64_t	HardwareCounters;
	struct _COUNTER_READING	HwCounter[16];
}__attribute__((packed));
