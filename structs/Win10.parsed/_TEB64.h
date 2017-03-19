/* CrossTebFlags */
#define	SpareCrossTebBits	0x0000FFFF

/* SameTebFlags */
#define	SafeThunkCall	0x00000001
#define	InDebugPrint	0x00000002
#define	HasFiberData	0x00000004
#define	SkipThreadAttach	0x00000008
#define	WerInShipAssertCode	0x00000010
#define	RanProcessInit	0x00000020
#define	ClonedThread	0x00000040
#define	SuppressDebugMsg	0x00000080
#define	DisableUserStackWalk	0x00000100
#define	RtlExceptionAttached	0x00000200
#define	InitialThread	0x00000400
#define	SessionAware	0x00000800
#define	LoadOwner	0x00001000
#define	LoaderWorker	0x00002000
#define	SpareSameTebBits	0x0000C000

struct _TEB64 {
	struct _NT_TIB64	NtTib;
	uint64_t	EnvironmentPointer;
	struct _CLIENT_ID64	ClientId;
	uint64_t	ActiveRpcHandle;
	uint64_t	ThreadLocalStoragePointer;
	uint64_t	ProcessEnvironmentBlock;
	uint32_t	LastErrorValue;
	uint32_t	CountOfOwnedCriticalSections;
	uint64_t	CsrClientThread;
	uint64_t	Win32ThreadInfo;
	uint32_t	User32Reserved[26];
	uint32_t	UserReserved[5];
	uint64_t	WOW32Reserved;
	uint32_t	CurrentLocale;
	uint32_t	FpSoftwareStatusRegister;
	uint64_t	ReservedForDebuggerInstrumentation[16];
	uint64_t	SystemReserved1[37];
	uint8_t	WorkingOnBehalfTicket[8];
	int32_t	ExceptionCode;
	uint8_t	Padding0[4];
	uint64_t	ActivationContextStackPointer;
	uint64_t	InstrumentationCallbackSp;
	uint64_t	InstrumentationCallbackPreviousPc;
	uint64_t	InstrumentationCallbackPreviousSp;
	uint32_t	TxFsContext;
	uint8_t	InstrumentationCallbackDisabled;
	uint8_t	Padding1[3];
	struct _GDI_TEB_BATCH64	GdiTebBatch;
	struct _CLIENT_ID64	RealClientId;
	uint64_t	GdiCachedProcessHandle;
	uint32_t	GdiClientPID;
	uint32_t	GdiClientTID;
	uint64_t	GdiThreadLocalInfo;
	uint64_t	Win32ClientInfo[62];
	uint64_t	glDispatchTable[233];
	uint64_t	glReserved1[29];
	uint64_t	glReserved2;
	uint64_t	glSectionInfo;
	uint64_t	glSection;
	uint64_t	glTable;
	uint64_t	glCurrentRC;
	uint64_t	glContext;
	uint32_t	LastStatusValue;
	uint8_t	Padding2[4];
	struct _STRING64	StaticUnicodeString;
	struct Wchar	StaticUnicodeBuffer[261];
	uint8_t	Padding3[6];
	uint64_t	DeallocationStack;
	uint64_t	TlsSlots[64];
	struct LIST_ENTRY64	TlsLinks;
	uint64_t	Vdm;
	uint64_t	ReservedForNtRpc;
	uint64_t	DbgSsReserved[2];
	uint32_t	HardErrorMode;
	uint8_t	Padding4[4];
	uint64_t	Instrumentation[11];
	struct _GUID	ActivityId;
	uint64_t	SubProcessTag;
	uint64_t	PerflibData;
	uint64_t	EtwTraceData;
	uint64_t	WinSockData;
	uint32_t	GdiBatchCount;
	union {
		struct _PROCESSOR_NUMBER	CurrentIdealProcessor;
		uint32_t	IdealProcessorValue;
		uint8_t	ReservedPad0;
	};
	uint8_t	ReservedPad1;
	uint8_t	ReservedPad2;
	uint8_t	IdealProcessor;
	uint32_t	GuaranteedStackBytes;
	uint8_t	Padding5[4];
	uint64_t	ReservedForPerf;
	uint64_t	ReservedForOle;
	uint32_t	WaitingOnLoaderLock;
	uint8_t	Padding6[4];
	uint64_t	SavedPriorityState;
	uint64_t	ReservedForCodeCoverage;
	uint64_t	ThreadPoolData;
	uint64_t	TlsExpansionSlots;
	uint64_t	DeallocationBStore;
	uint64_t	BStoreLimit;
	uint32_t	MuiGeneration;
	uint32_t	IsImpersonating;
	uint64_t	NlsCache;
	uint64_t	pShimData;
	uint16_t	HeapVirtualAffinity;
	uint16_t	LowFragHeapDataSlot;
	uint8_t	Padding7[4];
	uint64_t	CurrentTransactionHandle;
	uint64_t	ActiveFrame;
	uint64_t	FlsData;
	uint64_t	PreferredLanguages;
	uint64_t	UserPrefLanguages;
	uint64_t	MergedPrefLanguages;
	uint32_t	MuiImpersonation;
	uint16_t	CrossTebFlags;
	uint16_t	SameTebFlags;
	uint64_t	TxnScopeEnterCallback;
	uint64_t	TxnScopeExitCallback;
	uint64_t	TxnScopeContext;
	uint32_t	LockCount;
	int32_t	WowTebOffset;
	uint64_t	ResourceRetValue;
	uint64_t	ReservedForWdf;
	uint64_t	ReservedForCrt;
	struct _GUID	EffectiveContainerId;
}__attribute__((packed));
