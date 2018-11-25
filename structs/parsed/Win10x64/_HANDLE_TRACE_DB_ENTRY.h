
struct _HANDLE_TRACE_DB_ENTRY {
	struct _CLIENT_ID	ClientId;
	void	*Handle;
	uint32_t	Type;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*StackTrace[16];
}__attribute__((packed));
