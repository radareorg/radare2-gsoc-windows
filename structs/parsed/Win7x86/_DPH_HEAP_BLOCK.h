
struct _DPH_HEAP_BLOCK {
	union {
		struct _DPH_HEAP_BLOCKstruct Ptr32	pNextAlloc;
		struct _LIST_ENTRY	AvailableEntry;
		struct _RTL_BALANCED_LINKS	TableLinks;
	};
	uint8_tstruct Ptr32	pUserAllocation;
	uint8_tstruct Ptr32	pVirtualBlock;
	uint32_t	nVirtualBlockSize;
	uint32_t	nVirtualAccessSize;
	uint32_t	nUserRequestedSize;
	uint32_t	nUserActualSize;
	voidstruct Ptr32	UserValue;
	uint32_t	UserFlags;
	struct _RTL_TRACE_BLOCKstruct Ptr32	StackTrace;
	struct _LIST_ENTRY	AdjacencyEntry;
	uint8_tstruct Ptr32	pVirtualRegion;
}__attribute__((packed));
