
struct _PROC_PERF_CONSTRAINT {
	struct _KPRCB	*Prcb;
	uint64_t	PerfContext;
	uint32_t	ProcCap;
	uint32_t	ProcFloor;
	uint32_t	PlatformCap;
	uint32_t	ThermalCap;
	uint32_t	LimitReasons;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	PlatformCapStartTime;
	uint32_t	TargetPercent;
	uint32_t	SelectedPercent;
	uint32_t	SelectedFrequency;
	uint32_t	PreviousFrequency;
	uint32_t	PreviousPercent;
	uint32_t	LatestFrequencyPercent;
	uint64_t	SelectedState;
	uint8_t	Force;
}__attribute__((packed));
