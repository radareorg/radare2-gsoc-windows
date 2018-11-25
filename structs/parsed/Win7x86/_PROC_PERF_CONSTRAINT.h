
struct _PROC_PERF_CONSTRAINT {
	struct _KPRCB	*Prcb;
	uint32_t	PerfContext;
	uint32_t	PercentageCap;
	uint32_t	ThermalCap;
	uint32_t	TargetFrequency;
	uint32_t	AcumulatedFullFrequency;
	uint32_t	AcumulatedZeroFrequency;
	uint32_t	FrequencyHistoryTotal;
	uint32_t	AverageFrequency;
}__attribute__((packed));
