
/* Flags */
#define	PackagedBinary	0x00000001
#define	MarkedForRemoval	0x00000002
#define	ImageDll	0x00000004
#define	LoadNotificationsSent	0x00000008
#define	TelemetryEntryProcessed	0x00000010
#define	ProcessStaticImport	0x00000020
#define	InLegacyLists	0x00000040
#define	InIndexes	0x00000080
#define	ShimDll	0x00000100
#define	InExceptionTable	0x00000200
#define	ReservedFlags1	0x00000C00
#define	LoadInProgress	0x00001000
#define	LoadConfigProcessed	0x00002000
#define	EntryProcessed	0x00004000
#define	ProtectDelayLoad	0x00008000
#define	ReservedFlags3	0x00030000
#define	DontCallForThreads	0x00040000
#define	ProcessAttachCalled	0x00080000
#define	ProcessAttachFailed	0x00100000
#define	CorDeferredValidate	0x00200000
#define	CorImage	0x00400000
#define	DontRelocate	0x00800000
#define	CorILOnly	0x01000000
#define	ReservedFlags5	0x0E000000
#define	Redirected	0x10000000
#define	ReservedFlags6	0x60000000
#define	CompatDatabaseProcessed	0x80000000

struct _LDR_DATA_TABLE_ENTRY {
	struct _LIST_ENTRY	InLoadOrderLinks;
	struct _LIST_ENTRY	InMemoryOrderLinks;
	struct _LIST_ENTRY	InInitializationOrderLinks;
	void	*DllBase;
	void	*EntryPoint;
	uint32_t	SizeOfImage;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _UNICODE_STRING	FullDllName;
	struct _UNICODE_STRING	BaseDllName;
	union {
		uint8_t	FlagGroup[4];
		uint32_t	Flags;
	};
	uint16_t	ObsoleteLoadCount;
	uint16_t	TlsIndex;
	struct _LIST_ENTRY	HashLinks;
	uint32_t	TimeDateStamp;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _ACTIVATION_CONTEXT	*EntryPointActivationContext;
	void	*Lock;
	struct _LDR_DDAG_NODE	*DdagNode;
	struct _LIST_ENTRY	NodeModuleLink;
	struct _LDRP_LOAD_CONTEXT	*LoadContext;
	void	*ParentDllBase;
	void	*SwitchBackContext;
	struct _RTL_BALANCED_NODE	BaseAddressIndexNode;
	struct _RTL_BALANCED_NODE	MappingInfoIndexNode;
	uint64_t	OriginalBase;
	struct _LARGE_INTEGER	LoadTime;
	uint32_t	BaseNameHashValue;
	struct _LDR_DLL_LOAD_REASON	LoadReason;
	uint32_t	ImplicitPathOptions;
	uint32_t	ReferenceCount;
	uint32_t	DependentLoadFlags;
}__attribute__((packed));
