/* MinThreads */
#define	TryFailed	0x80000000

struct _EX_WORK_QUEUE {
	struct _KPRIQUEUE	WorkPriQueue;
	struct _ENODE	*Node;
	uint32_t	WorkItemsProcessed;
	uint32_t	WorkItemsProcessedLastPass;
	int32_t	ThreadCount;
	struct Bitsstruct 31struct 0,struct Pos	MinThreads;
	int32_t	MaxThreads;
	struct _EXQUEUEINDEX	QueueIndex;
}__attribute__((packed));
