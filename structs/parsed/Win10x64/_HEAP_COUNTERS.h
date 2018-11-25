
struct _HEAP_COUNTERS {
	uint64_t	TotalMemoryReserved;
	uint64_t	TotalMemoryCommitted;
	uint64_t	TotalMemoryLargeUCR;
	uint64_t	TotalSizeInVirtualBlocks;
	uint32_t	TotalSegments;
	uint32_t	TotalUCRs;
	uint32_t	CommittOps;
	uint32_t	DeCommitOps;
	uint32_t	LockAcquires;
	uint32_t	LockCollisions;
	uint32_t	CommitRate;
	uint32_t	DecommittRate;
	uint32_t	CommitFailures;
	uint32_t	InBlockCommitFailures;
	uint32_t	PollIntervalCounter;
	uint32_t	DecommitsSinceLastCheck;
	uint32_t	HeapPollInterval;
	uint32_t	AllocAndFreeOps;
	uint32_t	AllocationIndicesActive;
	uint32_t	InBlockDeccommits;
	uint64_t	InBlockDeccomitSize;
	uint64_t	HighWatermarkSize;
	uint64_t	LastPolledSize;
}__attribute__((packed));
