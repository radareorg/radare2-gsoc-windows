
struct _ERESOURCE {
	struct _LIST_ENTRY	SystemResourcesList;
	struct _OWNER_ENTRYstruct Ptr32	OwnerTable;
	int16_t	ActiveCount;
	uint16_t	Flag;
	struct _KSEMAPHOREstruct Ptr32	SharedWaiters;
	struct _KEVENTstruct Ptr32	ExclusiveWaiters;
	struct _OWNER_ENTRY	OwnerEntry;
	uint32_t	ActiveEntries;
	uint32_t	ContentionCount;
	uint32_t	NumberOfSharedWaiters;
	uint32_t	NumberOfExclusiveWaiters;
	union {
		voidstruct Ptr32	Address;
		uint32_t	CreatorBackTraceIndex;
	};
	uint32_t	SpinLock;
}__attribute__((packed));
