
struct _KDPC_DATA {
	struct _KDPC_LIST	DpcList;
	uint64_t	DpcLock;
	int32_t	DpcQueueDepth;
	uint32_t	DpcCount;
	struct _KDPC	*ActiveDpc;
}__attribute__((packed));
