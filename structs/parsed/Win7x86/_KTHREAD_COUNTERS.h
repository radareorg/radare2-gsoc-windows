
struct _KTHREAD_COUNTERS {
	uint64_t	WaitReasonBitMap;
	struct _THREAD_PERFORMANCE_DATA	*UserData;
	uint32_t	Flags;
	uint32_t	ContextSwitches;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	CycleTimeBias;
	uint64_t	HardwareCounters;
	struct _COUNTER_READING	HwCounter[16];
}__attribute__((packed));
