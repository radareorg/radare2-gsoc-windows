
/* CrossThreadFlags */
#define	Terminated	0x00000001
#define	ThreadInserted	0x00000002
#define	HideFromDebugger	0x00000004
#define	ActiveImpersonationInfo	0x00000008
#define	Reserved	0x00000010
#define	HardErrorsAreDisabled	0x00000020
#define	BreakOnTermination	0x00000040
#define	SkipCreationMsg	0x00000080
#define	SkipTerminationMsg	0x00000100
#define	CopyTokenOnOpen	0x00000200
#define	ThreadIoPriority	0x00001C00
#define	ThreadPagePriority	0x0000E000
#define	RundownFail	0x00010000
#define	NeedsWorkingSetAging	0x00020000

/* SameThreadPassiveFlags */
#define	ActiveExWorker	0x00000001
#define	ExWorkerCanWaitUser	0x00000002
#define	MemoryMaker	0x00000004
#define	ClonedThread	0x00000008
#define	KeyedEventInUse	0x00000010
#define	RateApcState	0x00000060
#define	SelfTerminate	0x00000080

/* SameThreadApcFlags */
#define	Spare	0x00000001
#define	StartAddressInvalid	0x00000002
#define	EtwPageFaultCalloutActive	0x00000004
#define	OwnsProcessWorkingSetExclusive	0x00000008
#define	OwnsProcessWorkingSetShared	0x00000010
#define	OwnsSystemCacheWorkingSetExclusive	0x00000020
#define	OwnsSystemCacheWorkingSetShared	0x00000040
#define	OwnsSessionWorkingSetExclusive	0x00000080

/* OwnsSessionWorkingSetExclusive */
#define	OwnsSessionWorkingSetShared	0x00000001
#define	OwnsProcessAddressSpaceExclusive	0x00000002
#define	OwnsProcessAddressSpaceShared	0x00000004
#define	SuppressSymbolLoad	0x00000008
#define	Prefetching	0x00000010
#define	OwnsDynamicMemoryShared	0x00000020
#define	OwnsChangeControlAreaExclusive	0x00000040
#define	OwnsChangeControlAreaShared	0x00000080

/* OwnsChangeControlAreaShared */
#define	OwnsPagedPoolWorkingSetExclusive	0x00000001
#define	OwnsPagedPoolWorkingSetShared	0x00000002
#define	OwnsSystemPtesWorkingSetExclusive	0x00000004
#define	OwnsSystemPtesWorkingSetShared	0x00000008
#define	TrimTrigger	0x00000030
#define	Spare1	0x000000C0

struct _ETHREAD {
	struct _KTHREAD	Tcb;
	struct _LARGE_INTEGER	CreateTime;
	union {
		struct _LARGE_INTEGER	ExitTime;
		struct _LIST_ENTRY	KeyedWaitChain;
	};
	int32_t	ExitStatus;
	union {
		struct _LIST_ENTRY	PostBlockList;
		void	*ForwardLinkShadow;
	};
	void	*StartAddress;
	union {
		struct _TERMINATION_PORT	*TerminationPort;
		struct _ETHREAD	*ReaperLink;
		void	*KeyedWaitValue;
	};
	uint32_t	ActiveTimerListLock;
	struct _LIST_ENTRY	ActiveTimerListHead;
	struct _CLIENT_ID	Cid;
	union {
		struct _KSEMAPHORE	KeyedWaitSemaphore;
		struct _KSEMAPHORE	AlpcWaitSemaphore;
	};
	struct _PS_CLIENT_SECURITY_CONTEXT	ClientSecurity;
	struct _LIST_ENTRY	IrpList;
	uint32_t	TopLevelIrp;
	struct _DEVICE_OBJECT	*DeviceToVerify;
	struct _PSP_CPU_QUOTA_APC	*CpuQuotaApc;
	void	*Win32StartAddress;
	void	*LegacyPowerObject;
	struct _LIST_ENTRY	ThreadListEntry;
	struct _EX_RUNDOWN_REF	RundownProtect;
	struct _EX_PUSH_LOCK	ThreadLock;
	uint32_t	ReadClusterSize;
	int32_t	MmLockOrdering;
	uint32_t	CrossThreadFlags;
	uint32_t	SameThreadPassiveFlags;
	uint32_t	SameThreadApcFlags;
	uint8_t	PriorityRegionActive;
	uint8_t	CacheManagerActive;
	uint8_t	DisablePageFaultClustering;
	uint8_t	ActiveFaultCount;
	uint8_t	LockOrderState;
	uint32_t	AlpcMessageId;
	union {
		void	*AlpcMessage;
		uint32_t	AlpcReceiveAttributeSet;
	};
	struct _LIST_ENTRY	AlpcWaitListEntry;
	uint32_t	CacheManagerCount;
	uint32_t	IoBoostCount;
	uint32_t	IrpListLock;
	void	*ReservedForSynchTracking;
	struct _SINGLE_LIST_ENTRY	CmCallbackListHead;
	uint32_t	KernelStackReference;
}__attribute__((packed));
