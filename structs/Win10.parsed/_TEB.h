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

struct _TEB {
	struct _NT_TIB	NtTib;
	void	*EnvironmentPointer;
	struct _CLIENT_ID	ClientId;
	void	*ActiveRpcHandle;
	void	*ThreadLocalStoragePointer;
	struct _PEB	*ProcessEnvironmentBlock;
	uint32_t	LastErrorValue;
	uint32_t	CountOfOwnedCriticalSections;
	void	*CsrClientThread;
	void	*Win32ThreadInfo;
	uint32_t	User32Reserved[26];
	uint32_t	UserReserved[5];
	void	*WOW32Reserved;
	uint32_t	CurrentLocale;
	uint32_t	FpSoftwareStatusRegister;
	void	*ReservedForDebuggerInstrumentation[16];
	void	*SystemReserved1[37];
	uint8_t	WorkingOnBehalfTicket[8];
	int32_t	ExceptionCode;
	uint8_t	Padding0[4];
	struct _ACTIVATION_CONTEXT_STACK	*ActivationContextStackPointer;
	uint64_t	InstrumentationCallbackSp;
	uint64_t	InstrumentationCallbackPreviousPc;
	uint64_t	InstrumentationCallbackPreviousSp;
	uint32_t	TxFsContext;
	uint8_t	InstrumentationCallbackDisabled;
	uint8_t	Padding1[3];
	struct _GDI_TEB_BATCH	GdiTebBatch;
	struct _CLIENT_ID	RealClientId;
	void	*GdiCachedProcessHandle;
	uint32_t	GdiClientPID;
	uint32_t	GdiClientTID;
	void	*GdiThreadLocalInfo;
	uint64_t	Win32ClientInfo[62];
	void	*glDispatchTable[233];
	uint64_t	glReserved1[29];
	void	*glReserved2;
	void	*glSectionInfo;
	void	*glSection;
	void	*glTable;
	void	*glCurrentRC;
	void	*glContext;
	uint32_t	LastStatusValue;
	uint8_t	Padding2[4];
	struct _UNICODE_STRING	StaticUnicodeString;
	struct Wchar	StaticUnicodeBuffer[261];
	uint8_t	Padding3[6];
	void	*DeallocationStack;
	void	*TlsSlots[64];
	struct _LIST_ENTRY	TlsLinks;
	void	*Vdm;
	void	*ReservedForNtRpc;
	void	*DbgSsReserved[2];
	uint32_t	HardErrorMode;
	uint8_t	Padding4[4];
	void	*Instrumentation[11];
	struct _GUID	ActivityId;
	void	*SubProcessTag;
	void	*PerflibData;
	void	*EtwTraceData;
	void	*WinSockData;
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
	void	*ReservedForPerf;
	void	*ReservedForOle;
	uint32_t	WaitingOnLoaderLock;
	uint8_t	Padding6[4];
	void	*SavedPriorityState;
	uint64_t	ReservedForCodeCoverage;
	void	*ThreadPoolData;
	void	**TlsExpansionSlots;
	void	*DeallocationBStore;
	void	*BStoreLimit;
	uint32_t	MuiGeneration;
	uint32_t	IsImpersonating;
	void	*NlsCache;
	void	*pShimData;
	uint16_t	HeapVirtualAffinity;
	uint16_t	LowFragHeapDataSlot;
	uint8_t	Padding7[4];
	void	*CurrentTransactionHandle;
	struct _TEB_ACTIVE_FRAME	*ActiveFrame;
	void	*FlsData;
	void	*PreferredLanguages;
	void	*UserPrefLanguages;
	void	*MergedPrefLanguages;
	uint32_t	MuiImpersonation;
	uint16_t	CrossTebFlags;
	uint16_t	SameTebFlags;
	void	*TxnScopeEnterCallback;
	void	*TxnScopeExitCallback;
	void	*TxnScopeContext;
	uint32_t	LockCount;
	int32_t	WowTebOffset;
	void	*ResourceRetValue;
	void	*ReservedForWdf;
	uint64_t	ReservedForCrt;
	struct _GUID	EffectiveContainerId;
}__attribute__((packed));
