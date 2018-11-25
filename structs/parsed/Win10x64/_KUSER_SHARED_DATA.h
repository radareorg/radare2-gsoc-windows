
/* MitigationPolicies */
#define	NXSupportPolicy	0x00000003
#define	SEHValidationPolicy	0x0000000C
#define	CurDirDevicesSkippedForDlls	0x00000030
#define	Reserved	0x000000C0

/* SharedDataFlags */
#define	DbgErrorPortPresent	0x00000001
#define	DbgElevationEnabled	0x00000002
#define	DbgVirtEnabled	0x00000004
#define	DbgInstallerDetectEnabled	0x00000008
#define	DbgLkgEnabled	0x00000010
#define	DbgDynProcessorEnabled	0x00000020
#define	DbgConsoleBrokerEnabled	0x00000040
#define	DbgSecureBootEnabled	0x00000080
#define	DbgMultiSessionSku	0x00000100
#define	DbgMultiUsersInSessionSku	0x00000200
#define	SpareBits	0xFFFFFC00

struct _KUSER_SHARED_DATA {
	uint32_t	TickCountLowDeprecated;
	uint32_t	TickCountMultiplier;
	struct _KSYSTEM_TIME	InterruptTime;
	struct _KSYSTEM_TIME	SystemTime;
	struct _KSYSTEM_TIME	TimeZoneBias;
	uint16_t	ImageNumberLow;
	uint16_t	ImageNumberHigh;
	struct Wchar	NtSystemRoot[260];
	uint32_t	MaxStackTraceDepth;
	uint32_t	CryptoExponent;
	uint32_t	TimeZoneId;
	uint32_t	LargePageMinimum;
	uint32_t	AitSamplingValue;
	uint32_t	AppCompatFlag;
	uint64_t	RNGSeedVersion;
	uint32_t	GlobalValidationRunlevel;
	int32_t	TimeZoneBiasStamp;
	uint32_t	NtBuildNumber;
	struct _NT_PRODUCT_TYPE	NtProductType;
	uint8_t	ProductTypeIsValid;
	uint8_t	Reserved0[1];
	uint16_t	NativeProcessorArchitecture;
	uint32_t	NtMajorVersion;
	uint32_t	NtMinorVersion;
	uint8_t	ProcessorFeatures[64];
	uint32_t	Reserved1;
	uint32_t	Reserved3;
	uint32_t	TimeSlip;
	struct _ALTERNATIVE_ARCHITECTURE_TYPE	AlternativeArchitecture;
	uint32_t	BootId;
	struct _LARGE_INTEGER	SystemExpirationDate;
	uint32_t	SuiteMask;
	uint8_t	KdDebuggerEnabled;
	uint8_t	MitigationPolicies;
	uint8_t	Reserved6[2];
	uint32_t	ActiveConsoleId;
	uint32_t	DismountCount;
	uint32_t	ComPlusPackage;
	uint32_t	LastSystemRITEventTickCount;
	uint32_t	NumberOfPhysicalPages;
	uint8_t	SafeBootMode;
	uint8_t	VirtualizationFlags;
	uint8_t	Reserved12[2];
	uint32_t	SharedDataFlags;
	uint32_t	DataFlagsPad[1];
	uint64_t	TestRetInstruction;
	int64_t	QpcFrequency;
	uint32_t	SystemCall;
	uint32_t	SystemCallPad0;
	uint64_t	SystemCallPad[2];
	union {
		struct _KSYSTEM_TIME	TickCount;
		uint64_t	TickCountQuad;
		uint32_t	ReservedTickCountOverlay[3];
	};
	uint32_t	TickCountPad[1];
	uint32_t	Cookie;
	uint32_t	CookiePad[1];
	int64_t	ConsoleSessionForegroundProcessId;
	uint64_t	TimeUpdateLock;
	uint64_t	BaselineSystemTimeQpc;
	uint64_t	BaselineInterruptTimeQpc;
	uint64_t	QpcSystemTimeIncrement;
	uint64_t	QpcInterruptTimeIncrement;
	uint8_t	QpcSystemTimeIncrementShift;
	uint8_t	QpcInterruptTimeIncrementShift;
	uint16_t	UnparkedProcessorCount;
	uint32_t	EnclaveFeatureMask[4];
	uint32_t	Reserved8;
	uint16_t	UserModeGlobalLogger[16];
	uint32_t	ImageFileExecutionOptions;
	uint32_t	LangGenerationCount;
	uint64_t	Reserved4;
	uint64_t	InterruptTimeBias;
	uint64_t	QpcBias;
	uint32_t	ActiveProcessorCount;
	uint8_t	ActiveGroupCount;
	uint8_t	Reserved9;
	union {
		uint16_t	QpcData;
		uint8_t	QpcBypassEnabled;
	};
	uint8_t	QpcShift;
	struct _LARGE_INTEGER	TimeZoneBiasEffectiveStart;
	struct _LARGE_INTEGER	TimeZoneBiasEffectiveEnd;
	struct _XSTATE_CONFIGURATION	XState;
}__attribute__((packed));
