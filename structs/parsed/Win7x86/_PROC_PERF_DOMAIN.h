
struct _PROC_PERF_DOMAIN {
	struct _LIST_ENTRY	Link;
	struct _KPRCBstruct Ptr32	Master;
	struct _KAFFINITY_EX	Members;
	struct charstruct unsignedstruct Ptr32	FeedbackHandler;
	voidstruct Ptr32	GetFFHThrottleState;
	voidstruct Ptr32	BoostPolicyHandler;
	struct longstruct unsignedstruct Ptr32	PerfSelectionHandler;
	voidstruct Ptr32	PerfHandler;
	struct _PROC_PERF_CONSTRAINTstruct Ptr32	Processors;
	uint64_t	PerfChangeTime;
	uint32_t	ProcessorCount;
	uint32_t	PreviousFrequencyMhz;
	uint32_t	CurrentFrequencyMhz;
	uint32_t	PreviousFrequency;
	uint32_t	CurrentFrequency;
	uint32_t	CurrentPerfContext;
	uint32_t	DesiredFrequency;
	uint32_t	MaxFrequency;
	uint32_t	MinPerfPercent;
	uint32_t	MinThrottlePercent;
	uint32_t	MaxPercent;
	uint32_t	MinPercent;
	uint32_t	ConstrainedMaxPercent;
	uint32_t	ConstrainedMinPercent;
	uint8_t	Coordination;
	int32_t	PerfChangeIntervalCount;
}__attribute__((packed));
