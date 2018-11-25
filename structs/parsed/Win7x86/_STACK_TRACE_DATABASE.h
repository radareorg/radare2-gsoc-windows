
struct _STACK_TRACE_DATABASE {
	union {
		struct Char	Reserved[56];
		struct _RTL_STACK_DATABASE_LOCK	Lock;
	};
	void	*Reserved2;
	uint32_t	PeakHashCollisionListLength;
	void	*LowerMemoryStart;
	uint8_t	PreCommitted;
	uint8_t	DumpInProgress;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	void	*CommitBase;
	void	*CurrentLowerCommitLimit;
	void	*CurrentUpperCommitLimit;
	struct Char	*NextFreeLowerMemory;
	struct Char	*NextFreeUpperMemory;
	uint32_t	NumberOfEntriesLookedUp;
	uint32_t	NumberOfEntriesAdded;
	struct _RTL_STACK_TRACE_ENTRY	**EntryIndexArray;
	uint32_t	NumberOfEntriesAllocated;
	uint32_t	NumberOfEntriesAvailable;
	uint32_t	NumberOfAllocationFailures;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _SLIST_HEADER	FreeLists[32];
	uint32_t	NumberOfBuckets;
	struct _RTL_STD_LIST_HEAD	Buckets[1];
}__attribute__((packed));
