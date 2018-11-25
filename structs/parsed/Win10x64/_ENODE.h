
/* ExpWorkerSeed */
#define	ExWorkerFullInit	0x00000001
#define	ExWorkerStructInit	0x00000002

struct _ENODE {
	struct _KNODE	Ncb;
	struct _EX_WORK_QUEUE	*ExWorkQueues[8];
	struct _EX_WORK_QUEUE	ExWorkQueue;
	struct _EX_WORK_QUEUE	IoWorkQueue;
	struct _KEVENT	ExpThreadSetManagerEvent;
	struct _KTIMER	ExpDeadlockTimer;
	struct _KEVENT	ExpThreadReaperEvent;
	struct _KWAIT_BLOCK	WaitBlocks[3];
	struct _ETHREAD	*ExpWorkerThreadBalanceManagerPtr;
	uint32_t	ExpWorkerSeed;
	uint32_t	ExWorkerFlags;
}__attribute__((packed));
