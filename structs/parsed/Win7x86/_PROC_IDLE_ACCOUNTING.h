
struct _PROC_IDLE_ACCOUNTING {
	uint32_t	StateCount;
	uint32_t	TotalTransitions;
	uint32_t	ResetCount;
	uint64_t	StartTime;
	uint64_t	BucketLimits[16];
	struct _PROC_IDLE_STATE_ACCOUNTING	State[1];
}__attribute__((packed));
