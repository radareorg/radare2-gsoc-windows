
struct _PROC_IDLE_STATE_ACCOUNTING {
	uint64_t	TotalTime;
	uint32_t	IdleTransitions;
	uint32_t	FailedTransitions;
	uint32_t	InvalidBucketIndex;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	MinTime;
	uint64_t	MaxTime;
	struct _PROC_IDLE_STATE_BUCKET	IdleTimeBuckets[16];
}__attribute__((packed));
