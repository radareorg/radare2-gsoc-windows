
/* Alerted[2] */
#define	KernelStackResident	0x00000001
#define	ReadyTransition	0x00000002
#define	ProcessReadyQueue	0x00000004
#define	WaitNext	0x00000008
#define	SystemAffinityActive	0x00000010
#define	Alertable	0x00000020
#define	GdiFlushActive	0x00000040
#define	UserStackWalkActive	0x00000080
#define	ApcInterruptRequest	0x00000100
#define	ForceDeferSchedule	0x00000200
#define	QuantumEndMigrate	0x00000400
#define	UmsDirectedSwitchEnable	0x00000800
#define	TimerActive	0x00001000
#define	SystemThread	0x00002000
#define	Reserved	0xFFFFC000

/* Timer */
#define	AutoAlignment	0x00000001
#define	DisableBoost	0x00000002
#define	EtwStackTraceApc1Inserted	0x00000004
#define	EtwStackTraceApc2Inserted	0x00000008
#define	CalloutActive	0x00000010
#define	ApcQueueable	0x00000020
#define	EnableStackSwap	0x00000040
#define	GuiThread	0x00000080
#define	UmsPerformingSyscall	0x00000100
#define	VdmSafe	0x00000200
#define	UmsDispatched	0x00000400
#define	ReservedFlags	0xFFFFF800

/* PriorityDecrement */
#define	ForegroundBoost	0x0000000F
#define	UnusualBoost	0x000000F0

struct _KTHREAD {
	struct _DISPATCHER_HEADER	Header;
	uint64_t	CycleTime;
	uint32_t	HighCycleTime;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	QuantumTarget;
	void	*InitialStack;
	void	*StackLimit;
	void	*KernelStack;
	uint32_t	ThreadLock;
	struct _KWAIT_STATUS_REGISTER	WaitRegister;
	uint8_t	Running;
	uint8_t	Alerted[2];
	uint8_t	__padding0__;
	int32_t	MiscFlags;
	union {
		struct _KAPC_STATE	ApcState;
		uint8_t	ApcStateFill[23];
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
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	uint8_t	__padding18__;
	uint8_t	__padding19__;
	uint8_t	__padding20__;
	uint8_t	__padding21__;
	};
	struct Char	Priority;
	uint32_t	NextProcessor;
	uint32_t	DeferredProcessor;
	uint32_t	ApcQueueLock;
	uint32_t	ContextSwitches;
	uint8_t	State;
	struct Char	NpxState;
	uint8_t	WaitIrql;
	struct Char	WaitMode;
	int32_t	WaitStatus;
	struct _KWAIT_BLOCK	*WaitBlockList;
	union {
		struct _LIST_ENTRY	WaitListEntry;
		struct _SINGLE_LIST_ENTRY	SwapListEntry;
	};
	struct _KQUEUE	*Queue;
	uint32_t	WaitTime;
	int16_t	KernelApcDisable;
	int16_t	SpecialApcDisable;
	uint32_t	CombinedApcDisable;
	void	*Teb;
	struct _KTIMER	Timer;
	int32_t	ThreadFlags;
	void	*ServiceTable;
	struct _KWAIT_BLOCK	WaitBlock[4];
	struct _LIST_ENTRY	QueueListEntry;
	struct _KTRAP_FRAME	*TrapFrame;
	void	*FirstArgument;
	union {
		void	*CallbackStack;
		uint32_t	CallbackDepth;
	};
	uint8_t	ApcStateIndex;
	struct Char	BasePriority;
	struct Char	PriorityDecrement;
	uint8_t	Preempted;
	uint8_t	AdjustReason;
	struct Char	AdjustIncrement;
	struct Char	PreviousMode;
	struct Char	Saturation;
	uint32_t	SystemCallNumber;
	uint32_t	FreezeCount;
	struct _GROUP_AFFINITY	UserAffinity;
	struct _KPROCESS	*Process;
	struct _GROUP_AFFINITY	Affinity;
	uint32_t	IdealProcessor;
	uint32_t	UserIdealProcessor;
	struct _KAPC_STATE	*ApcStatePointer[2];
	union {
		struct _KAPC_STATE	SavedApcState;
		uint8_t	SavedApcStateFill[23];
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
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	uint8_t	__padding18__;
	uint8_t	__padding19__;
	uint8_t	__padding20__;
	uint8_t	__padding21__;
	};
	uint8_t	WaitReason;
	struct Char	SuspendCount;
	struct Char	Spare1;
	uint8_t	OtherPlatformFill;
	uint8_t	__padding0__;
	void	*Win32Thread;
	void	*StackBase;
	union {
		struct _KAPC	SuspendApc;
		uint8_t	SuspendApcFill0[1];
	};
	uint8_t	ResourceIndex;
	uint8_t	SuspendApcFill1[3];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	QuantumReset;
	uint8_t	SuspendApcFill2[4];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint32_t	KernelTime;
	uint8_t	SuspendApcFill3[36];
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
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	uint8_t	__padding18__;
	uint8_t	__padding19__;
	uint8_t	__padding20__;
	uint8_t	__padding21__;
	uint8_t	__padding22__;
	uint8_t	__padding23__;
	uint8_t	__padding24__;
	uint8_t	__padding25__;
	uint8_t	__padding26__;
	uint8_t	__padding27__;
	uint8_t	__padding28__;
	uint8_t	__padding29__;
	uint8_t	__padding30__;
	uint8_t	__padding31__;
	uint8_t	__padding32__;
	uint8_t	__padding33__;
	uint8_t	__padding34__;
	struct _KPRCB	*WaitPrcb;
	uint8_t	SuspendApcFill4[40];
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
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	uint8_t	__padding18__;
	uint8_t	__padding19__;
	uint8_t	__padding20__;
	uint8_t	__padding21__;
	uint8_t	__padding22__;
	uint8_t	__padding23__;
	uint8_t	__padding24__;
	uint8_t	__padding25__;
	uint8_t	__padding26__;
	uint8_t	__padding27__;
	uint8_t	__padding28__;
	uint8_t	__padding29__;
	uint8_t	__padding30__;
	uint8_t	__padding31__;
	uint8_t	__padding32__;
	uint8_t	__padding33__;
	uint8_t	__padding34__;
	uint8_t	__padding35__;
	uint8_t	__padding36__;
	uint8_t	__padding37__;
	uint8_t	__padding38__;
	void	*LegoData;
	uint8_t	SuspendApcFill5[47];
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
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	uint8_t	__padding18__;
	uint8_t	__padding19__;
	uint8_t	__padding20__;
	uint8_t	__padding21__;
	uint8_t	__padding22__;
	uint8_t	__padding23__;
	uint8_t	__padding24__;
	uint8_t	__padding25__;
	uint8_t	__padding26__;
	uint8_t	__padding27__;
	uint8_t	__padding28__;
	uint8_t	__padding29__;
	uint8_t	__padding30__;
	uint8_t	__padding31__;
	uint8_t	__padding32__;
	uint8_t	__padding33__;
	uint8_t	__padding34__;
	uint8_t	__padding35__;
	uint8_t	__padding36__;
	uint8_t	__padding37__;
	uint8_t	__padding38__;
	uint8_t	__padding39__;
	uint8_t	__padding40__;
	uint8_t	__padding41__;
	uint8_t	__padding42__;
	uint8_t	__padding43__;
	uint8_t	__padding44__;
	uint8_t	__padding45__;
	uint8_t	LargeStack;
	uint32_t	UserTime;
	union {
		struct _KSEMAPHORE	SuspendSemaphore;
		uint8_t	SuspendSemaphorefill[20];
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
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	uint8_t	__padding18__;
	};
	uint32_t	SListFaultCount;
	struct _LIST_ENTRY	ThreadListEntry;
	struct _LIST_ENTRY	MutantListHead;
	void	*SListFaultAddress;
	struct _KTHREAD_COUNTERS	*ThreadCounters;
	struct _XSTATE_SAVE	*XStateSave;
}__attribute__((packed));
