
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
#define	SpareSameTebBits	0x0000F800

struct _TEB {
	struct _NT_TIB	NtTib;
	voidstruct Ptr32	EnvironmentPointer;
	struct _CLIENT_ID	ClientId;
	voidstruct Ptr32	ActiveRpcHandle;
	voidstruct Ptr32	ThreadLocalStoragePointer;
	struct _PEBstruct Ptr32	ProcessEnvironmentBlock;
	uint32_t	LastErrorValue;
	uint32_t	CountOfOwnedCriticalSections;
	voidstruct Ptr32	CsrClientThread;
	voidstruct Ptr32	Win32ThreadInfo;
	uint32_t	User32Reserved[26];
	uint32_t	UserReserved[5];
	voidstruct Ptr32	WOW32Reserved;
	uint32_t	CurrentLocale;
	uint32_t	FpSoftwareStatusRegister;
	voidstruct Ptr32	SystemReserved1[54];
	int32_t	ExceptionCode;
	struct _ACTIVATION_CONTEXT_STACKstruct Ptr32	ActivationContextStackPointer;
	uint8_t	SpareBytes[36];
	uint32_t	TxFsContext;
	struct _GDI_TEB_BATCH	GdiTebBatch;
	struct _CLIENT_ID	RealClientId;
	voidstruct Ptr32	GdiCachedProcessHandle;
	uint32_t	GdiClientPID;
	uint32_t	GdiClientTID;
	voidstruct Ptr32	GdiThreadLocalInfo;
	uint32_t	Win32ClientInfo[62];
	voidstruct Ptr32	glDispatchTable[233];
	uint32_t	glReserved1[29];
	voidstruct Ptr32	glReserved2;
	voidstruct Ptr32	glSectionInfo;
	voidstruct Ptr32	glSection;
	voidstruct Ptr32	glTable;
	voidstruct Ptr32	glCurrentRC;
	voidstruct Ptr32	glContext;
	uint32_t	LastStatusValue;
	struct _UNICODE_STRING	StaticUnicodeString;
	struct Wchar	StaticUnicodeBuffer[261];
	voidstruct Ptr32	DeallocationStack;
	voidstruct Ptr32	TlsSlots[64];
	struct _LIST_ENTRY	TlsLinks;
	voidstruct Ptr32	Vdm;
	voidstruct Ptr32	ReservedForNtRpc;
	voidstruct Ptr32	DbgSsReserved[2];
	uint32_t	HardErrorMode;
	voidstruct Ptr32	Instrumentation[9];
	struct _GUID	ActivityId;
	voidstruct Ptr32	SubProcessTag;
	voidstruct Ptr32	EtwLocalData;
	voidstruct Ptr32	EtwTraceData;
	voidstruct Ptr32	WinSockData;
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
	voidstruct Ptr32	ReservedForPerf;
	voidstruct Ptr32	ReservedForOle;
	uint32_t	WaitingOnLoaderLock;
	voidstruct Ptr32	SavedPriorityState;
	uint32_t	SoftPatchPtr1;
	voidstruct Ptr32	ThreadPoolData;
	voidstruct Ptr32struct Ptr32	TlsExpansionSlots;
	uint32_t	MuiGeneration;
	uint32_t	IsImpersonating;
	voidstruct Ptr32	NlsCache;
	voidstruct Ptr32	pShimData;
	uint32_t	HeapVirtualAffinity;
	voidstruct Ptr32	CurrentTransactionHandle;
	struct _TEB_ACTIVE_FRAMEstruct Ptr32	ActiveFrame;
	voidstruct Ptr32	FlsData;
	voidstruct Ptr32	PreferredLanguages;
	voidstruct Ptr32	UserPrefLanguages;
	voidstruct Ptr32	MergedPrefLanguages;
	uint32_t	MuiImpersonation;
	uint16_t	CrossTebFlags;
	uint16_t	SameTebFlags;
	voidstruct Ptr32	TxnScopeEnterCallback;
	voidstruct Ptr32	TxnScopeExitCallback;
	voidstruct Ptr32	TxnScopeContext;
	uint32_t	LockCount;
	uint32_t	SpareUlong0;
	voidstruct Ptr32	ResourceRetValue;
}__attribute__((packed));
