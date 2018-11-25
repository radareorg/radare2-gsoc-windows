
/* ExceptionPortValue */
#define	ExceptionPortState	0x00000007

/* Flags2 */
#define	JobNotReallyActive	0x00000001
#define	AccountingFolded	0x00000002
#define	NewProcessReported	0x00000004
#define	ExitProcessReported	0x00000008
#define	ReportCommitChanges	0x00000010
#define	LastReportMemory	0x00000020
#define	ReportPhysicalPageChanges	0x00000040
#define	HandleTableRundown	0x00000080
#define	NeedsHandleRundown	0x00000100
#define	RefTraceEnabled	0x00000200
#define	NumaAware	0x00000400
#define	ProtectedProcess	0x00000800
#define	DefaultPagePriority	0x00007000
#define	PrimaryTokenFrozen	0x00008000
#define	ProcessVerifierTarget	0x00010000
#define	StackRandomizationDisabled	0x00020000
#define	AffinityPermanent	0x00040000
#define	AffinityUpdateEnable	0x00080000
#define	PropagateNode	0x00100000
#define	ExplicitAffinity	0x00200000
#define	Spare1	0x00400000
#define	ForceRelocateImages	0x00800000
#define	DisallowStrippedImages	0x01000000
#define	LowVaAccessible	0x02000000
#define	RestrictIndirectBranchPrediction	0x04000000
#define	AddressPolicyFrozen	0x08000000
#define	MemoryDisambiguationDisable	0x10000000

/* Flags */
#define	CreateReported	0x00000001
#define	NoDebugInherit	0x00000002
#define	ProcessExiting	0x00000004
#define	ProcessDelete	0x00000008
#define	Wow64SplitPages	0x00000010
#define	VmDeleted	0x00000020
#define	OutswapEnabled	0x00000040
#define	Outswapped	0x00000080
#define	ForkFailed	0x00000100
#define	Wow64VaSpace4Gb	0x00000200
#define	AddressSpaceInitialized	0x00000C00
#define	SetTimerResolution	0x00001000
#define	BreakOnTermination	0x00002000
#define	DeprioritizeViews	0x00004000
#define	WriteWatch	0x00008000
#define	ProcessInSession	0x00010000
#define	OverrideAddressSpace	0x00020000
#define	HasAddressSpace	0x00040000
#define	LaunchPrefetched	0x00080000
#define	InjectInpageErrors	0x00100000
#define	VmTopDown	0x00200000
#define	ImageNotifyDone	0x00400000
#define	PdeUpdateNeeded	0x00800000
#define	VdmAllowed	0x01000000
#define	CrossSessionCreate	0x02000000
#define	ProcessInserted	0x04000000
#define	DefaultIoPriority	0x38000000
#define	ProcessSelfDelete	0x40000000
#define	SetTimerResolutionLink	0x80000000

struct _EPROCESS {
	struct _KPROCESS	Pcb;
	struct _EX_PUSH_LOCK	ProcessLock;
	struct _LARGE_INTEGER	CreateTime;
	struct _LARGE_INTEGER	ExitTime;
	struct _EX_RUNDOWN_REF	RundownProtect;
	voidstruct Ptr32	UniqueProcessId;
	struct _LIST_ENTRY	ActiveProcessLinks;
	uint32_t	ProcessQuotaUsage[2];
	uint32_t	ProcessQuotaPeak[2];
	uint32_t	CommitCharge;
	struct _EPROCESS_QUOTA_BLOCKstruct Ptr32	QuotaBlock;
	struct _PS_CPU_QUOTA_BLOCKstruct Ptr32	CpuQuotaBlock;
	uint32_t	PeakVirtualSize;
	uint32_t	VirtualSize;
	struct _LIST_ENTRY	SessionProcessLinks;
	voidstruct Ptr32	DebugPort;
	union {
		voidstruct Ptr32	ExceptionPortData;
		uint32_t	ExceptionPortValue;
	};
	struct _HANDLE_TABLEstruct Ptr32	ObjectTable;
	struct _EX_FAST_REF	Token;
	uint32_t	WorkingSetPage;
	struct _EX_PUSH_LOCK	AddressCreationLock;
	struct _ETHREADstruct Ptr32	RotateInProgress;
	struct _ETHREADstruct Ptr32	ForkInProgress;
	uint32_t	HardwareTrigger;
	struct _MM_AVL_TABLEstruct Ptr32	PhysicalVadRoot;
	voidstruct Ptr32	CloneRoot;
	uint32_t	NumberOfPrivatePages;
	uint32_t	NumberOfLockedPages;
	voidstruct Ptr32	Win32Process;
	struct _EJOBstruct Ptr32	Job;
	voidstruct Ptr32	SectionObject;
	voidstruct Ptr32	SectionBaseAddress;
	uint32_t	Cookie;
	uint32_t	Spare8;
	struct _PAGEFAULT_HISTORYstruct Ptr32	WorkingSetWatch;
	voidstruct Ptr32	Win32WindowStation;
	voidstruct Ptr32	InheritedFromUniqueProcessId;
	voidstruct Ptr32	LdtInformation;
	voidstruct Ptr32	VdmObjects;
	uint32_t	ConsoleHostProcess;
	voidstruct Ptr32	DeviceMap;
	voidstruct Ptr32	EtwDataSource;
	voidstruct Ptr32	FreeTebHint;
	uint64_t	PageDirectoryPte;
	voidstruct Ptr32	Session;
	uint8_t	ImageFileName[15];
	uint8_t	PriorityClass;
	struct _LIST_ENTRY	JobLinks;
	voidstruct Ptr32	LockedPagesList;
	struct _LIST_ENTRY	ThreadListHead;
	voidstruct Ptr32	SecurityPort;
	voidstruct Ptr32	PaeTop;
	uint32_t	ActiveThreads;
	uint32_t	ImagePathHash;
	uint32_t	DefaultHardErrorProcessing;
	int32_t	LastThreadExitStatus;
	struct _PEBstruct Ptr32	Peb;
	struct _EX_FAST_REF	PrefetchTrace;
	struct _LARGE_INTEGER	ReadOperationCount;
	struct _LARGE_INTEGER	WriteOperationCount;
	struct _LARGE_INTEGER	OtherOperationCount;
	struct _LARGE_INTEGER	ReadTransferCount;
	struct _LARGE_INTEGER	WriteTransferCount;
	struct _LARGE_INTEGER	OtherTransferCount;
	uint32_t	CommitChargeLimit;
	uint32_t	CommitChargePeak;
	voidstruct Ptr32	AweInfo;
	struct _SE_AUDIT_PROCESS_CREATION_INFO	SeAuditProcessCreationInfo;
	struct _MMSUPPORT	Vm;
	struct _LIST_ENTRY	MmProcessLinks;
	voidstruct Ptr32	HighestUserAddress;
	uint32_t	ModifiedPageCount;
	uint32_t	Flags2;
	uint32_t	Flags;
	int32_t	ExitStatus;
	struct _MM_AVL_TABLE	VadRoot;
	struct _ALPC_PROCESS_CONTEXT	AlpcContext;
	struct _LIST_ENTRY	TimerResolutionLink;
	uint32_t	RequestedTimerResolution;
	uint32_t	ActiveThreadsHighWatermark;
	uint32_t	SmallestTimerResolution;
	struct _PO_DIAG_STACK_RECORDstruct Ptr32	TimerResolutionStackRecord;
	uint64_t	SequenceNumber;
	uint64_t	CreateInterruptTime;
	uint64_t	CreateUnbiasedInterruptTime;
	uint64_t	SecurityDomain;
}__attribute__((packed));
