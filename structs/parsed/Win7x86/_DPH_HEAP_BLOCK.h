
struct _DPH_HEAP_BLOCK {
	union {
		struct _DPH_HEAP_BLOCK	*pNextAlloc;
		struct _LIST_ENTRY	AvailableEntry;
		struct _RTL_BALANCED_LINKS	TableLinks;
	};
	uint8_t	*pUserAllocation;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	*pVirtualBlock;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint32_t	nVirtualBlockSize;
	uint32_t	nVirtualAccessSize;
	uint32_t	nUserRequestedSize;
	uint32_t	nUserActualSize;
	void	*UserValue;
	uint32_t	UserFlags;
	struct _RTL_TRACE_BLOCK	*StackTrace;
	struct _LIST_ENTRY	AdjacencyEntry;
	uint8_t	*pVirtualRegion;
}__attribute__((packed));
