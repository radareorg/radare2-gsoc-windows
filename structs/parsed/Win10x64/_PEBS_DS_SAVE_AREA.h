
struct _PEBS_DS_SAVE_AREA {
	uint64_t	BtsBufferBase;
	uint64_t	BtsIndex;
	uint64_t	BtsAbsoluteMaximum;
	uint64_t	BtsInterruptThreshold;
	uint64_t	PebsBufferBase;
	uint64_t	PebsIndex;
	uint64_t	PebsAbsoluteMaximum;
	uint64_t	PebsInterruptThreshold;
	uint64_t	PebsCounterReset0;
	uint64_t	PebsCounterReset1;
	uint64_t	PebsCounterReset2;
	uint64_t	PebsCounterReset3;
}__attribute__((packed));
