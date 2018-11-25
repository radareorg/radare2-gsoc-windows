
struct _ERESOURCE {
	struct _LIST_ENTRY	SystemResourcesList;
	struct _OWNER_ENTRY	*OwnerTable;
	int16_t	ActiveCount;
	union {
		uint16_t	Flag;
		uint8_t	ReservedLowFlags;
	};
	uint8_t	WaiterPriority;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _KWAIT_CHAIN	SharedWaiters;
	struct _KEVENT	*ExclusiveWaiters;
	struct _OWNER_ENTRY	OwnerEntry;
	uint32_t	ActiveEntries;
	uint32_t	ContentionCount;
	uint32_t	NumberOfSharedWaiters;
	uint32_t	NumberOfExclusiveWaiters;
	void	*Reserved2;
	union {
		void	*Address;
		uint64_t	CreatorBackTraceIndex;
	};
	uint64_t	SpinLock;
}__attribute__((packed));
