
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
	void	*Mutant;
	void	*ImageBaseAddress;
	struct _PEB_LDR_DATA	*Ldr;
	struct _RTL_USER_PROCESS_PARAMETERS	*ProcessParameters;
	void	*SubSystemData;
	void	*ProcessHeap;
	struct _RTL_CRITICAL_SECTION	*FastPebLock;
	void	*AtlThunkSListPtr;
	void	*IFEOKey;
	uint32_t	CrossProcessFlags;
	union {
		void	*KernelCallbackTable;
		void	*UserSharedInfoPtr;
	};
	uint32_t	SystemReserved[1];
	uint32_t	AtlThunkSListPtr32;
	void	*ApiSetMap;
	uint32_t	TlsExpansionCounter;
	void	*TlsBitmap;
	uint32_t	TlsBitmapBits[2];
	void	*ReadOnlySharedMemoryBase;
	void	*HotpatchInformation;
	void	**ReadOnlyStaticServerData;
	void	*AnsiCodePageData;
	void	*OemCodePageData;
	void	*UnicodeCaseTableData;
	uint32_t	NumberOfProcessors;
	uint32_t	NtGlobalFlag;
	struct _LARGE_INTEGER	CriticalSectionTimeout;
	uint32_t	HeapSegmentReserve;
	uint32_t	HeapSegmentCommit;
	uint32_t	HeapDeCommitTotalFreeThreshold;
	uint32_t	HeapDeCommitFreeBlockThreshold;
	uint32_t	NumberOfHeaps;
	uint32_t	MaximumNumberOfHeaps;
	void	**ProcessHeaps;
	void	*GdiSharedHandleTable;
	void	*ProcessStarterHelper;
	uint32_t	GdiDCAttributeList;
	struct _RTL_CRITICAL_SECTION	*LoaderLock;
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
	void	*PostProcessInitRoutine;
	void	*TlsExpansionBitmap;
	uint32_t	TlsExpansionBitmapBits[32];
	uint32_t	SessionId;
	struct _ULARGE_INTEGER	AppCompatFlags;
	struct _ULARGE_INTEGER	AppCompatFlagsUser;
	void	*pShimData;
	void	*AppCompatInfo;
	struct _UNICODE_STRING	CSDVersion;
	struct _ACTIVATION_CONTEXT_DATA	*ActivationContextData;
	struct _ASSEMBLY_STORAGE_MAP	*ProcessAssemblyStorageMap;
	struct _ACTIVATION_CONTEXT_DATA	*SystemDefaultActivationContextData;
	struct _ASSEMBLY_STORAGE_MAP	*SystemAssemblyStorageMap;
	uint32_t	MinimumStackCommit;
	struct _FLS_CALLBACK_INFO	*FlsCallback;
	struct _LIST_ENTRY	FlsListHead;
	void	*FlsBitmap;
	uint32_t	FlsBitmapBits[4];
	uint32_t	FlsHighIndex;
	void	*WerRegistrationData;
	void	*WerShipAssertPtr;
	void	*pContextData;
	void	*pImageHeaderHash;
	uint32_t	TracingFlags;
}__attribute__((packed));
