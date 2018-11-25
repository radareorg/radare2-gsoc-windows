
struct _HEAP_COUNTERS {
	uint32_t	TotalMemoryReserved;
	uint32_t	TotalMemoryCommitted;
	uint32_t	TotalMemoryLargeUCR;
	uint32_t	TotalSizeInVirtualBlocks;
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
	uint32_t	CompactHeapCalls;
	uint32_t	CompactedUCRs;
	uint32_t	AllocAndFreeOps;
	uint32_t	InBlockDeccommits;
	uint32_t	InBlockDeccomitSize;
	uint32_t	HighWatermarkSize;
	uint32_t	LastPolledSize;
}__attribute__((packed));
