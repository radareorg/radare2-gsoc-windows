
struct _PPM_FFH_THROTTLE_STATE_INFO {
	uint8_t	EnableLogging;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint32_t	MismatchCount;
	uint8_t	Initialized;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint64_t	LastValue;
	struct _LARGE_INTEGER	LastLogTickCount;
}__attribute__((packed));
