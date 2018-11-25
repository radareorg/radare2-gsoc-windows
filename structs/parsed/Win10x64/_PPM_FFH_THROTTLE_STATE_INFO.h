
struct _PPM_FFH_THROTTLE_STATE_INFO {
	uint8_t	EnableLogging;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint32_t	MismatchCount;
	uint8_t	Initialized;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint64_t	LastValue;
	struct _LARGE_INTEGER	LastLogTickCount;
}__attribute__((packed));
