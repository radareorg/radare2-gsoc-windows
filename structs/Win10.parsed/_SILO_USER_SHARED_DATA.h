
struct _SILO_USER_SHARED_DATA {
	uint32_t	ServiceSessionId;
	uint32_t	ActiveConsoleId;
	int64_t	ConsoleSessionForegroundProcessId;
	struct _NT_PRODUCT_TYPE	NtProductType;
	uint32_t	SuiteMask;
	uint8_t	IsMultiSessionSku;
}__attribute__((packed));
