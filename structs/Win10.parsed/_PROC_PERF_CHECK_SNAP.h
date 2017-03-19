
struct _PROC_PERF_CHECK_SNAP {
	uint64_t	Time;
	uint64_t	Active;
	uint64_t	Stall;
	uint64_t	FrequencyScaledActive;
	uint64_t	PerformanceScaledActive;
	uint64_t	PerformanceScaledKernelActive;
	uint64_t	CyclesActive;
	uint64_t	CyclesAffinitized;
	uint64_t	TaggedThreadCycles[2];
}__attribute__((packed));
