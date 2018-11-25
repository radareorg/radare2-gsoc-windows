
struct _STACK_TRACE_DATABASE {
	union {
		struct Char	Reserved[104];
		struct _RTL_STACK_DATABASE_LOCK	Lock;
	};
	void	*Reserved2;
	uint64_t	PeakHashCollisionListLength;
	void	*LowerMemoryStart;
	uint8_t	PreCommitted;
	uint8_t	DumpInProgress;
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
	struct _SLIST_HEADER	FreeLists[32];
	uint32_t	NumberOfBuckets;
	struct _RTL_STD_LIST_HEAD	Buckets[1];
}__attribute__((packed));
