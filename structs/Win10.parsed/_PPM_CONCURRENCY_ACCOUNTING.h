
struct _PPM_CONCURRENCY_ACCOUNTING {
	uint64_t	Lock;
	uint32_t	Processors;
	uint32_t	ActiveProcessors;
	uint64_t	LastUpdateTime;
	uint64_t	TotalTime;
	uint64_t	AccumulatedTime[1];
}__attribute__((packed));
