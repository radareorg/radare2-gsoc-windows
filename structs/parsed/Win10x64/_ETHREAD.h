
/* CrossThreadFlags */
#define	Terminated	0x00000001
#define	ThreadInserted	0x00000002
#define	HideFromDebugger	0x00000004
#define	ActiveImpersonationInfo	0x00000008
#define	HardErrorsAreDisabled	0x00000010
#define	BreakOnTermination	0x00000020
#define	SkipCreationMsg	0x00000040
#define	SkipTerminationMsg	0x00000080
#define	CopyTokenOnOpen	0x00000100
#define	ThreadIoPriority	0x00000E00
#define	ThreadPagePriority	0x00007000
#define	RundownFail	0x00008000
#define	UmsForceQueueTermination	0x00010000
#define	IndirectCpuSets	0x00020000
#define	DisableDynamicCodeOptOut	0x00040000
#define	ExplicitCaseSensitivity	0x00080000
#define	ReservedCrossThreadFlags	0xFFF00000

/* SameThreadPassiveFlags */
#define	ActiveExWorker	0x00000001
#define	MemoryMaker	0x00000002
#define	StoreLockThread	0x0000000C
#define	ClonedThread	0x00000010
#define	KeyedEventInUse	0x00000020
#define	SelfTerminate	0x00000040
#define	RespectIoPriority	0x00000080
#define	ActivePageLists	0x00000100
#define	ReservedSameThreadPassiveFlags	0xFFFFFE00

/* SameThreadApcFlags */
#define	OwnsProcessAddressSpaceExclusive	0x00000001
#define	OwnsProcessAddressSpaceShared	0x00000002
#define	HardFaultBehavior	0x00000004
#define	StartAddressInvalid	0x00000008
#define	EtwCalloutActive	0x00000010
#define	SuppressSymbolLoad	0x00000020
#define	Prefetching	0x00000040
#define	OwnsVadExclusive	0x00000080

/* OwnsVadExclusive */
#define	SystemPagePriorityActive	0x00000001
#define	SystemPagePriority	0x0000000E

struct _ETHREAD {
	struct _KTHREAD	Tcb;
	struct _LARGE_INTEGER	CreateTime;
	union {
		struct _LARGE_INTEGER	ExitTime;
		struct _LIST_ENTRY	KeyedWaitChain;
	};
	void	*ChargeOnlySession;
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
	uint64_t	ActiveTimerListLock;
	struct _LIST_ENTRY	ActiveTimerListHead;
	struct _CLIENT_ID	Cid;
	union {
		struct _KSEMAPHORE	KeyedWaitSemaphore;
		struct _KSEMAPHORE	AlpcWaitSemaphore;
	};
	struct _PS_CLIENT_SECURITY_CONTEXT	ClientSecurity;
	struct _LIST_ENTRY	IrpList;
	uint64_t	TopLevelIrp;
	struct _DEVICE_OBJECT	*DeviceToVerify;
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
	uint8_t	CacheManagerActive;
	uint8_t	DisablePageFaultClustering;
	uint8_t	ActiveFaultCount;
	uint8_t	LockOrderState;
	uint64_t	AlpcMessageId;
	union {
		void	*AlpcMessage;
		uint32_t	AlpcReceiveAttributeSet;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	};
	struct _LIST_ENTRY	AlpcWaitListEntry;
	int32_t	ExitStatus;
	uint32_t	CacheManagerCount;
	uint32_t	IoBoostCount;
	uint32_t	IoQoSBoostCount;
	uint32_t	IoQoSThrottleCount;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _LIST_ENTRY	BoostList;
	struct _LIST_ENTRY	DeboostList;
	uint64_t	BoostListLock;
	uint64_t	IrpListLock;
	void	*ReservedForSynchTracking;
	struct _SINGLE_LIST_ENTRY	CmCallbackListHead;
	struct _GUID	*ActivityId;
	struct _SINGLE_LIST_ENTRY	SeLearningModeListHead;
	void	*VerifierContext;
	uint32_t	KernelStackReference;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*AdjustedClientToken;
	void	*WorkOnBehalfThread;
	struct _PS_PROPERTY_SET	PropertySet;
	void	*PicoContext;
	uint64_t	UserFsBase;
	uint64_t	UserGsBase;
	struct _THREAD_ENERGY_VALUES	*EnergyValues;
	void	*CmDbgInfo;
	union {
		uint64_t	SelectedCpuSets;
		uint64_t	*SelectedCpuSetsIndirect;
	};
	struct _EJOB	*Silo;
	struct _UNICODE_STRING	*ThreadName;
	struct _CONTEXT	*SetContextState;
	uint32_t	ReadyTime;
}__attribute__((packed));
