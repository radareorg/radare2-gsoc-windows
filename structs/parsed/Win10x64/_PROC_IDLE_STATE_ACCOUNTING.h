
struct _PROC_IDLE_STATE_ACCOUNTING {
	uint64_t	TotalTime;
	uint32_t	CancelCount;
	uint32_t	FailureCount;
	uint32_t	SuccessCount;
	uint32_t	InvalidBucketIndex;
	uint64_t	MinTime;
	uint64_t	MaxTime;
	struct _PPM_SELECTION_STATISTICS	SelectionStatistics;
	struct _PROC_IDLE_STATE_BUCKET	IdleTimeBuckets[26];
}__attribute__((packed));
