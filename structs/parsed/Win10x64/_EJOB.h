
/* JobFlags */
#define	CloseDone	0x00000001
#define	MultiGroup	0x00000002
#define	OutstandingNotification	0x00000004
#define	NotificationInProgress	0x00000008
#define	UILimits	0x00000010
#define	CpuRateControlActive	0x00000020
#define	OwnCpuRateControl	0x00000040
#define	Terminating	0x00000080
#define	WorkingSetLock	0x00000100
#define	JobFrozen	0x00000200
#define	Background	0x00000400
#define	WakeNotificationAllocated	0x00000800
#define	WakeNotificationEnabled	0x00001000
#define	WakeNotificationPending	0x00002000
#define	LimitNotificationRequired	0x00004000
#define	ZeroCountNotificationRequired	0x00008000
#define	CycleTimeNotificationRequired	0x00010000
#define	CycleTimeNotificationPending	0x00020000
#define	TimersVirtualized	0x00040000
#define	JobSwapped	0x00080000
#define	ViolationDetected	0x00100000
#define	EmptyJobNotified	0x00200000
#define	NoSystemCharge	0x00400000
#define	DropNoWakeCharges	0x00800000
#define	NoWakeChargePolicyDecided	0x01000000
#define	NetRateControlActive	0x02000000
#define	OwnNetRateControl	0x04000000
#define	IoRateControlActive	0x08000000
#define	OwnIoRateControl	0x10000000
#define	DisallowNewProcesses	0x20000000
#define	Silo	0x40000000
#define	Spare	0x80000000

struct _EJOB {
	struct _KEVENT	Event;
	struct _LIST_ENTRY	JobLinks;
	struct _LIST_ENTRY	ProcessListHead;
	struct _ERESOURCE	JobLock;
	struct _LARGE_INTEGER	TotalUserTime;
	struct _LARGE_INTEGER	TotalKernelTime;
	struct _LARGE_INTEGER	TotalCycleTime;
	struct _LARGE_INTEGER	ThisPeriodTotalUserTime;
	struct _LARGE_INTEGER	ThisPeriodTotalKernelTime;
	uint64_t	TotalContextSwitches;
	uint32_t	TotalPageFaultCount;
	uint32_t	TotalProcesses;
	uint32_t	ActiveProcesses;
	uint32_t	TotalTerminatedProcesses;
	struct _LARGE_INTEGER	PerProcessUserTimeLimit;
	struct _LARGE_INTEGER	PerJobUserTimeLimit;
	uint64_t	MinimumWorkingSetSize;
	uint64_t	MaximumWorkingSetSize;
	uint32_t	LimitFlags;
	uint32_t	ActiveProcessLimit;
	struct _KAFFINITY_EX	Affinity;
	struct _JOB_ACCESS_STATE	*AccessState;
	void	*AccessStateQuotaReference;
	uint32_t	UIRestrictionsClass;
	uint32_t	EndOfJobTimeAction;
	void	*CompletionPort;
	void	*CompletionKey;
	uint64_t	CompletionCount;
	uint32_t	SessionId;
	uint32_t	SchedulingClass;
	uint64_t	ReadOperationCount;
	uint64_t	WriteOperationCount;
	uint64_t	OtherOperationCount;
	uint64_t	ReadTransferCount;
	uint64_t	WriteTransferCount;
	uint64_t	OtherTransferCount;
	struct _PROCESS_DISK_COUNTERS	DiskIoInfo;
	uint64_t	ProcessMemoryLimit;
	uint64_t	JobMemoryLimit;
	uint64_t	JobTotalMemoryLimit;
	uint64_t	PeakProcessMemoryUsed;
	uint64_t	PeakJobMemoryUsed;
	struct _KAFFINITY_EX	EffectiveAffinity;
	struct _LARGE_INTEGER	EffectivePerProcessUserTimeLimit;
	uint64_t	EffectiveMinimumWorkingSetSize;
	uint64_t	EffectiveMaximumWorkingSetSize;
	uint64_t	EffectiveProcessMemoryLimit;
	struct _EJOB	*EffectiveProcessMemoryLimitJob;
	struct _EJOB	*EffectivePerProcessUserTimeLimitJob;
	struct _EJOB	*EffectiveNetIoRateLimitJob;
	struct _EJOB	*EffectiveHeapAttributionJob;
	uint32_t	EffectiveLimitFlags;
	uint32_t	EffectiveSchedulingClass;
	uint32_t	EffectiveFreezeCount;
	uint32_t	EffectiveBackgroundCount;
	uint32_t	EffectiveSwapCount;
	uint32_t	EffectiveNotificationLimitCount;
	uint8_t	EffectivePriorityClass;
	uint8_t	PriorityClass;
	uint8_t	NestingDepth;
	uint8_t	Reserved1[1];
	uint32_t	CompletionFilter;
	union {
		struct _WNF_STATE_NAME	WakeChannel;
		struct _PS_WAKE_INFORMATION	WakeInfo;
	};
	struct _JOBOBJECT_WAKE_FILTER	WakeFilter;
	uint32_t	LowEdgeLatchFilter;
	uint32_t	OwnedHighEdgeFilters;
	struct _EJOB	*NotificationLink;
	uint64_t	CurrentJobMemoryUsed;
	struct _JOB_NOTIFICATION_INFORMATION	*NotificationInfo;
	void	*NotificationInfoQuotaReference;
	struct _IO_MINI_COMPLETION_PACKET_USER	*NotificationPacket;
	struct _JOB_CPU_RATE_CONTROL	*CpuRateControl;
	void	*EffectiveSchedulingGroup;
	uint64_t	ReadyTime;
	struct _EX_PUSH_LOCK	MemoryLimitsLock;
	struct _LIST_ENTRY	SiblingJobLinks;
	struct _LIST_ENTRY	ChildJobListHead;
	struct _EJOB	*ParentJob;
	struct _EJOB	*ParentSilo;
	struct _EJOB	*RootJob;
	struct _LIST_ENTRY	IteratorListHead;
	uint64_t	AncestorCount;
	union {
		struct _EJOB	**Ancestors;
		void	*SessionObject;
	};
	uint64_t	TimerListLock;
	struct _LIST_ENTRY	TimerListHead;
	struct _EPROCESS_VALUES	Accounting;
	uint32_t	ShadowActiveProcessCount;
	uint32_t	ActiveAuxiliaryProcessCount;
	uint32_t	SequenceNumber;
	uint32_t	JobId;
	struct _GUID	ContainerId;
	struct _ESERVERSILO_GLOBALS	*ServerSiloGlobals;
	struct _PS_PROPERTY_SET	PropertySet;
	struct _PSP_STORAGE	*Storage;
	struct _JOB_NET_RATE_CONTROL	*NetRateControl;
	uint32_t	JobFlags;
	uint32_t	EffectiveHighEdgeFilters;
	struct _PROCESS_ENERGY_VALUES	*EnergyValues;
	uint64_t	SharedCommitCharge;
	struct _EJOB	*WakeRoot;
	uint32_t	DiskIoAttributionUserRefCount;
	uint32_t	DiskIoAttributionRefCount;
	union {
		void	*DiskIoAttributionContext;
		struct _EJOB	*DiskIoAttributionOwnerJob;
	};
	struct _JOB_RATE_CONTROL_HEADER	IoRateControlHeader;
	struct _PS_IO_CONTROL_ENTRY	GlobalIoControl;
	int32_t	IoControlStateLock;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _RTL_RB_TREE	VolumeIoControlTree;
	uint64_t	IoRateOverQuotaHistory;
	uint32_t	IoRateCurrentGeneration;
	uint32_t	IoRateLastQueryGeneration;
	uint32_t	IoRateGenerationLength;
	uint32_t	IoRateOverQuotaNotifySequenceId;
	struct _EX_PUSH_LOCK	IoControlLock;
	uint64_t	SiloHardReferenceCount;
	struct _WORK_QUEUE_ITEM	RundownWorkItem;
}__attribute__((packed));
