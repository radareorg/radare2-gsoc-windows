
struct _STACK_TRACE_DATABASE {
	union {
		struct Char	Reserved[56];
		struct _RTL_STACK_DATABASE_LOCK	Lock;
	};
	voidstruct Ptr32	Reserved2;
	uint32_t	PeakHashCollisionListLength;
	voidstruct Ptr32	LowerMemoryStart;
	uint8_t	PreCommitted;
	uint8_t	DumpInProgress;
	voidstruct Ptr32	CommitBase;
	voidstruct Ptr32	CurrentLowerCommitLimit;
	voidstruct Ptr32	CurrentUpperCommitLimit;
	struct Charstruct Ptr32	NextFreeLowerMemory;
	struct Charstruct Ptr32	NextFreeUpperMemory;
	uint32_t	NumberOfEntriesLookedUp;
	uint32_t	NumberOfEntriesAdded;
	struct _RTL_STACK_TRACE_ENTRYstruct Ptr32struct Ptr32	EntryIndexArray;
	uint32_t	NumberOfEntriesAllocated;
	uint32_t	NumberOfEntriesAvailable;
	uint32_t	NumberOfAllocationFailures;
	struct _SLIST_HEADER	FreeLists[32];
	uint32_t	NumberOfBuckets;
	struct _RTL_STD_LIST_HEAD	Buckets[1];
}__attribute__((packed));
