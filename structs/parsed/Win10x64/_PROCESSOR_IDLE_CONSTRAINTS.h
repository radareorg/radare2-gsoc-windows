
struct _PROCESSOR_IDLE_CONSTRAINTS {
	uint64_t	TotalTime;
	uint64_t	IdleTime;
	uint64_t	ExpectedIdleDuration;
	uint64_t	MaxIdleDuration;
	uint32_t	OverrideState;
	uint32_t	TimeCheck;
	uint8_t	PromotePercent;
	uint8_t	DemotePercent;
	uint8_t	Parked;
	uint8_t	Interruptible;
	uint8_t	PlatformIdle;
	uint8_t	ExpectedWakeReason;
}__attribute__((packed));
