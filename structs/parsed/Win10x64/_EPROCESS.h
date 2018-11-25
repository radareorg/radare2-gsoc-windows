
/* Flags2 */
#define	JobNotReallyActive	0x00000001
#define	AccountingFolded	0x00000002
#define	NewProcessReported	0x00000004
#define	ExitProcessReported	0x00000008
#define	ReportCommitChanges	0x00000010
#define	LastReportMemory	0x00000020
#define	ForceWakeCharge	0x00000040
#define	CrossSessionCreate	0x00000080
#define	NeedsHandleRundown	0x00000100
#define	RefTraceEnabled	0x00000200
#define	DisableDynamicCode	0x00000400
#define	EmptyJobEvaluated	0x00000800
#define	DefaultPagePriority	0x00007000
#define	PrimaryTokenFrozen	0x00008000
#define	ProcessVerifierTarget	0x00010000
#define	StackRandomizationDisabled	0x00020000
#define	AffinityPermanent	0x00040000
#define	AffinityUpdateEnable	0x00080000
#define	PropagateNode	0x00100000
#define	ExplicitAffinity	0x00200000
#define	ProcessExecutionState	0x00C00000
#define	DisallowStrippedImages	0x01000000
#define	HighEntropyASLREnabled	0x02000000
#define	ExtensionPointDisable	0x04000000
#define	ForceRelocateImages	0x08000000
#define	ProcessStateChangeRequest	0x30000000
#define	ProcessStateChangeInProgress	0x40000000
#define	DisallowWin32kSystemCalls	0x80000000

/* Flags */
#define	CreateReported	0x00000001
#define	NoDebugInherit	0x00000002
#define	ProcessExiting	0x00000004
#define	ProcessDelete	0x00000008
#define	ControlFlowGuardEnabled	0x00000010
#define	VmDeleted	0x00000020
#define	OutswapEnabled	0x00000040
#define	Outswapped	0x00000080
#define	FailFastOnCommitFail	0x00000100
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
#define	Background	0x00100000
#define	VmTopDown	0x00200000
#define	ImageNotifyDone	0x00400000
#define	PdeUpdateNeeded	0x00800000
#define	VdmAllowed	0x01000000
#define	ProcessRundown	0x02000000
#define	ProcessInserted	0x04000000
#define	DefaultIoPriority	0x38000000
#define	ProcessSelfDelete	0x40000000
#define	SetTimerResolutionLink	0x80000000

/* ExceptionPortValue */
#define	ExceptionPortState	0x00000007

/* Flags3 */
#define	Minimal	0x00000001
#define	ReplacingPageRoot	0x00000002
#define	DisableNonSystemFonts	0x00000004
#define	AuditNonSystemFontLoading	0x00000008
#define	Crashed	0x00000010
#define	JobVadsAreTracked	0x00000020
#define	VadTrackingDisabled	0x00000040
#define	AuxiliaryProcess	0x00000080
#define	SubsystemProcess	0x00000100
#define	IndirectCpuSets	0x00000200
#define	InPrivate	0x00000400
#define	ProhibitRemoteImageMap	0x00000800
#define	ProhibitLowILImageMap	0x00001000
#define	SignatureMitigationOptIn	0x00002000
#define	DisableDynamicCodeAllowOptOut	0x00004000
#define	EnableFilteredWin32kAPIs	0x00008000
#define	AuditFilteredWin32kAPIs	0x00010000
#define	PreferSystem32Images	0x00020000
#define	RelinquishedCommit	0x00040000
#define	AutomaticallyOverrideChildProcessPolicy	0x00080000
#define	HighGraphicsPriority	0x00100000
#define	CommitFailLogged	0x00200000
#define	ReserveFailLogged	0x00400000

/* LastAppStateUpdateTime */
#define	LastAppStateUptime	0x1FFFFFFFFFFFFFFF
#define	LastAppState	0xE000000000000000

struct _EPROCESS {
	struct _KPROCESS	Pcb;
	struct _EX_PUSH_LOCK	ProcessLock;
	struct _EX_RUNDOWN_REF	RundownProtect;
	void	*UniqueProcessId;
	struct _LIST_ENTRY	ActiveProcessLinks;
	uint32_t	Flags2;
	uint32_t	Flags;
	struct _LARGE_INTEGER	CreateTime;
	uint64_t	ProcessQuotaUsage[2];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint64_t	ProcessQuotaPeak[2];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint64_t	PeakVirtualSize;
	uint64_t	VirtualSize;
	struct _LIST_ENTRY	SessionProcessLinks;
	union {
		void	*ExceptionPortData;
		uint64_t	ExceptionPortValue;
	};
	struct _EX_FAST_REF	Token;
	uint64_t	WorkingSetPage;
	struct _EX_PUSH_LOCK	AddressCreationLock;
	struct _EX_PUSH_LOCK	PageTableCommitmentLock;
	struct _ETHREAD	*RotateInProgress;
	struct _ETHREAD	*ForkInProgress;
	struct _EJOB	*CommitChargeJob;
	struct _RTL_AVL_TREE	CloneRoot;
	uint64_t	NumberOfPrivatePages;
	uint64_t	NumberOfLockedPages;
	void	*Win32Process;
	struct _EJOB	*Job;
	void	*SectionObject;
	void	*SectionBaseAddress;
	uint32_t	Cookie;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _PAGEFAULT_HISTORY	*WorkingSetWatch;
	void	*Win32WindowStation;
	void	*InheritedFromUniqueProcessId;
	void	*LdtInformation;
	uint64_t	OwnerProcessId;
	struct _PEB	*Peb;
	struct _MM_SESSION_SPACE	*Session;
	void	*AweInfo;
	struct _EPROCESS_QUOTA_BLOCK	*QuotaBlock;
	struct _HANDLE_TABLE	*ObjectTable;
	void	*DebugPort;
	struct _EWOW64PROCESS	*WoW64Process;
	void	*DeviceMap;
	void	*EtwDataSource;
	uint64_t	PageDirectoryPte;
	struct _FILE_OBJECT	*ImageFilePointer;
	uint8_t	ImageFileName[15];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint8_t	__padding8__;
	uint8_t	__padding9__;
	uint8_t	__padding10__;
	uint8_t	__padding11__;
	uint8_t	__padding12__;
	uint8_t	__padding13__;
	uint8_t	PriorityClass;
	void	*SecurityPort;
	struct _SE_AUDIT_PROCESS_CREATION_INFO	SeAuditProcessCreationInfo;
	struct _LIST_ENTRY	JobLinks;
	void	*HighestUserAddress;
	struct _LIST_ENTRY	ThreadListHead;
	uint32_t	ActiveThreads;
	uint32_t	ImagePathHash;
	uint32_t	DefaultHardErrorProcessing;
	int32_t	LastThreadExitStatus;
	struct _EX_FAST_REF	PrefetchTrace;
	void	*LockedPagesList;
	struct _LARGE_INTEGER	ReadOperationCount;
	struct _LARGE_INTEGER	WriteOperationCount;
	struct _LARGE_INTEGER	OtherOperationCount;
	struct _LARGE_INTEGER	ReadTransferCount;
	struct _LARGE_INTEGER	WriteTransferCount;
	struct _LARGE_INTEGER	OtherTransferCount;
	uint64_t	CommitChargeLimit;
	uint64_t	CommitCharge;
	uint64_t	CommitChargePeak;
	struct _MMSUPPORT_FULL	Vm;
	struct _LIST_ENTRY	MmProcessLinks;
	uint32_t	ModifiedPageCount;
	int32_t	ExitStatus;
	struct _RTL_AVL_TREE	VadRoot;
	void	*VadHint;
	uint64_t	VadCount;
	uint64_t	VadPhysicalPages;
	uint64_t	VadPhysicalPagesLimit;
	struct _ALPC_PROCESS_CONTEXT	AlpcContext;
	struct _LIST_ENTRY	TimerResolutionLink;
	struct _PO_DIAG_STACK_RECORD	*TimerResolutionStackRecord;
	uint32_t	RequestedTimerResolution;
	uint32_t	SmallestTimerResolution;
	struct _LARGE_INTEGER	ExitTime;
	struct _INVERTED_FUNCTION_TABLE	*InvertedFunctionTable;
	struct _EX_PUSH_LOCK	InvertedFunctionTableLock;
	uint32_t	ActiveThreadsHighWatermark;
	uint32_t	LargePrivateVadCount;
	struct _EX_PUSH_LOCK	ThreadListLock;
	void	*WnfContext;
	uint64_t	Spare0;
	uint8_t	SignatureLevel;
	uint8_t	SectionSignatureLevel;
	struct _PS_PROTECTION	Protection;
	uint8_t	HangCount;
	uint32_t	Flags3;
	int32_t	DeviceAsid;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*SvmData;
	struct _EX_PUSH_LOCK	SvmProcessLock;
	uint64_t	SvmLock;
	struct _LIST_ENTRY	SvmProcessDeviceListHead;
	uint64_t	LastFreezeInterruptTime;
	struct _PROCESS_DISK_COUNTERS	*DiskCounters;
	void	*PicoContext;
	uint64_t	TrustletIdentity;
	uint32_t	KeepAliveCounter;
	uint32_t	NoWakeKeepAliveCounter;
	uint32_t	HighPriorityFaultsAllowed;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _PROCESS_ENERGY_VALUES	*EnergyValues;
	void	*VmContext;
	uint64_t	SequenceNumber;
	uint64_t	CreateInterruptTime;
	uint64_t	CreateUnbiasedInterruptTime;
	uint64_t	TotalUnbiasedFrozenTime;
	uint64_t	LastAppStateUpdateTime;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint64_t	SharedCommitCharge;
	struct _EX_PUSH_LOCK	SharedCommitLock;
	struct _LIST_ENTRY	SharedCommitLinks;
	uint64_t	AllowedCpuSets;
	uint64_t	DefaultCpuSets;
	uint64_t	*AllowedCpuSetsIndirect;
	uint64_t	*DefaultCpuSetsIndirect;
	void	*DiskIoAttribution;
	uint32_t	ReadyTime;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*DxgProcess;
}__attribute__((packed));
