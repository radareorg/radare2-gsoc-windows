
/* BitField */
#define	ImageUsesLargePages	0x00000001
#define	IsProtectedProcess	0x00000002
#define	IsLegacyProcess	0x00000004
#define	IsImageDynamicallyRelocated	0x00000008
#define	SkipPatchingUser32Forwarders	0x00000010
#define	SpareBits	0x000000E0

/* CrossProcessFlags */
#define	ProcessInJob	0x00000001
#define	ProcessInitializing	0x00000002
#define	ProcessUsingVEH	0x00000004
#define	ProcessUsingVCH	0x00000008
#define	ProcessUsingFTH	0x00000010
#define	ReservedBits0	0xFFFFFFE0

/* TracingFlags */
#define	HeapTracingEnabled	0x00000001
#define	CritSecTracingEnabled	0x00000002
#define	SpareTracingBits	0xFFFFFFFC

struct _PEB {
	uint8_t	InheritedAddressSpace;
	uint8_t	ReadImageFileExecOptions;
	uint8_t	BeingDebugged;
	uint8_t	BitField;
	voidstruct Ptr32	Mutant;
	voidstruct Ptr32	ImageBaseAddress;
	struct _PEB_LDR_DATAstruct Ptr32	Ldr;
	struct _RTL_USER_PROCESS_PARAMETERSstruct Ptr32	ProcessParameters;
	voidstruct Ptr32	SubSystemData;
	voidstruct Ptr32	ProcessHeap;
	struct _RTL_CRITICAL_SECTIONstruct Ptr32	FastPebLock;
	voidstruct Ptr32	AtlThunkSListPtr;
	voidstruct Ptr32	IFEOKey;
	uint32_t	CrossProcessFlags;
	union {
		voidstruct Ptr32	KernelCallbackTable;
		voidstruct Ptr32	UserSharedInfoPtr;
	};
	uint32_t	SystemReserved[1];
	uint32_t	AtlThunkSListPtr32;
	voidstruct Ptr32	ApiSetMap;
	uint32_t	TlsExpansionCounter;
	voidstruct Ptr32	TlsBitmap;
	uint32_t	TlsBitmapBits[2];
	voidstruct Ptr32	ReadOnlySharedMemoryBase;
	voidstruct Ptr32	HotpatchInformation;
	voidstruct Ptr32struct Ptr32	ReadOnlyStaticServerData;
	voidstruct Ptr32	AnsiCodePageData;
	voidstruct Ptr32	OemCodePageData;
	voidstruct Ptr32	UnicodeCaseTableData;
	uint32_t	NumberOfProcessors;
	uint32_t	NtGlobalFlag;
	struct _LARGE_INTEGER	CriticalSectionTimeout;
	uint32_t	HeapSegmentReserve;
	uint32_t	HeapSegmentCommit;
	uint32_t	HeapDeCommitTotalFreeThreshold;
	uint32_t	HeapDeCommitFreeBlockThreshold;
	uint32_t	NumberOfHeaps;
	uint32_t	MaximumNumberOfHeaps;
	voidstruct Ptr32struct Ptr32	ProcessHeaps;
	voidstruct Ptr32	GdiSharedHandleTable;
	voidstruct Ptr32	ProcessStarterHelper;
	uint32_t	GdiDCAttributeList;
	struct _RTL_CRITICAL_SECTIONstruct Ptr32	LoaderLock;
	uint32_t	OSMajorVersion;
	uint32_t	OSMinorVersion;
	uint16_t	OSBuildNumber;
	uint16_t	OSCSDVersion;
	uint32_t	OSPlatformId;
	uint32_t	ImageSubsystem;
	uint32_t	ImageSubsystemMajorVersion;
	uint32_t	ImageSubsystemMinorVersion;
	uint32_t	ActiveProcessAffinityMask;
	uint32_t	GdiHandleBuffer[34];
	voidstruct Ptr32	PostProcessInitRoutine;
	voidstruct Ptr32	TlsExpansionBitmap;
	uint32_t	TlsExpansionBitmapBits[32];
	uint32_t	SessionId;
	struct _ULARGE_INTEGER	AppCompatFlags;
	struct _ULARGE_INTEGER	AppCompatFlagsUser;
	voidstruct Ptr32	pShimData;
	voidstruct Ptr32	AppCompatInfo;
	struct _UNICODE_STRING	CSDVersion;
	struct _ACTIVATION_CONTEXT_DATAstruct Ptr32	ActivationContextData;
	struct _ASSEMBLY_STORAGE_MAPstruct Ptr32	ProcessAssemblyStorageMap;
	struct _ACTIVATION_CONTEXT_DATAstruct Ptr32	SystemDefaultActivationContextData;
	struct _ASSEMBLY_STORAGE_MAPstruct Ptr32	SystemAssemblyStorageMap;
	uint32_t	MinimumStackCommit;
	struct _FLS_CALLBACK_INFOstruct Ptr32	FlsCallback;
	struct _LIST_ENTRY	FlsListHead;
	voidstruct Ptr32	FlsBitmap;
	uint32_t	FlsBitmapBits[4];
	uint32_t	FlsHighIndex;
	voidstruct Ptr32	WerRegistrationData;
	voidstruct Ptr32	WerShipAssertPtr;
	voidstruct Ptr32	pContextData;
	voidstruct Ptr32	pImageHeaderHash;
	uint32_t	TracingFlags;
}__attribute__((packed));
