
struct _HEAP_VS_CONTEXT {
	struct _RTL_SRWLOCK	Lock;
	struct _RTL_RB_TREE	FreeChunkTree;
	struct _LIST_ENTRY	SubsegmentList;
	uint64_t	TotalCommittedUnits;
	uint64_t	FreeCommittedUnits;
	void	*BackendCtx;
	struct _HEAP_SUBALLOCATOR_CALLBACKS	Callbacks;
}__attribute__((packed));
