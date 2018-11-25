
struct _KDPC_DATA {
	struct _LIST_ENTRY	DpcListHead;
	uint32_t	DpcLock;
	int32_t	DpcQueueDepth;
	uint32_t	DpcCount;
}__attribute__((packed));
