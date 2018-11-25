
struct _PROC_IDLE_ACCOUNTING {
	uint32_t	StateCount;
	uint32_t	TotalTransitions;
	uint32_t	ResetCount;
	uint32_t	AbortCount;
	uint64_t	StartTime;
	uint64_t	PriorIdleTime;
	struct PPM_IDLE_BUCKET_TIME_TYPE	TimeUnit;
	struct _PROC_IDLE_STATE_ACCOUNTING	State[1];
}__attribute__((packed));
