
/* ThreadCount */
#define	MinThreads	0x7FFFFFFF
#define	TryFailed	0x80000000

struct _EX_WORK_QUEUE {
	struct _KPRIQUEUE	WorkPriQueue;
	struct _ENODE	*Node;
	uint32_t	WorkItemsProcessed;
	uint32_t	WorkItemsProcessedLastPass;
	int32_t	ThreadCount;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	int32_t	MaxThreads;
	struct _EXQUEUEINDEX	QueueIndex;
}__attribute__((packed));
