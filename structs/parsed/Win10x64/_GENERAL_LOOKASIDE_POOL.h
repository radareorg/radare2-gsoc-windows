
struct _GENERAL_LOOKASIDE_POOL {
	union {
		struct _SLIST_HEADER	ListHead;
		struct _SINGLE_LIST_ENTRY	SingleListHead;
	};
	uint16_t	Depth;
	uint16_t	MaximumDepth;
	uint32_t	TotalAllocates;
	union {
		uint32_t	AllocateMisses;
		uint32_t	AllocateHits;
	};
	uint32_t	TotalFrees;
	union {
		uint32_t	FreeMisses;
		uint32_t	FreeHits;
	};
	struct _POOL_TYPE	Type;
	uint32_t	Tag;
	uint32_t	Size;
	union {
			*struct void*AllocateEx;
			*struct void*Allocate;
	};
	union {
		void	*FreeEx;
		void	*Free;
	};
	struct _LIST_ENTRY	ListEntry;
	uint32_t	LastTotalAllocates;
	union {
		uint32_t	LastAllocateMisses;
		uint32_t	LastAllocateHits;
	};
	uint32_t	Future[2];
}__attribute__((packed));
