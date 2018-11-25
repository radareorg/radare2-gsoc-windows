
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
	uint8_t	__padding46__;
	uint8_t	__padding47__;
	uint8_t	__padding48__;
	uint8_t	__padding49__;
	uint8_t	__padding50__;
	uint8_t	__padding51__;
	uint8_t	__padding52__;
	uint8_t	__padding53__;
	uint8_t	__padding54__;
	uint8_t	__padding55__;
	uint8_t	__padding56__;
	uint8_t	__padding57__;
	uint8_t	__padding58__;
	uint8_t	__padding59__;
	uint8_t	__padding60__;
	uint8_t	__padding61__;
	uint8_t	__padding62__;
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
	uint8_t	__padding0__;
	uint32_t	ActiveConsoleId;
	uint32_t	DismountCount;
	uint32_t	ComPlusPackage;
	uint32_t	LastSystemRITEventTickCount;
	uint32_t	NumberOfPhysicalPages;
	uint8_t	SafeBootMode;
	uint8_t	VirtualizationFlags;
	uint8_t	Reserved12[2];
	uint8_t	__padding0__;
	uint32_t	SharedDataFlags;
	uint32_t	DataFlagsPad[1];
	uint64_t	TestRetInstruction;
	int64_t	QpcFrequency;
	uint32_t	SystemCall;
	uint32_t	SystemCallPad0;
	uint64_t	SystemCallPad[2];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	union {
		struct _KSYSTEM_TIME	TickCount;
		uint64_t	TickCountQuad;
		uint32_t	ReservedTickCountOverlay[3];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
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
	uint32_t	Reserved8;
	uint16_t	UserModeGlobalLogger[16];
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
