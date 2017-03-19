
struct _HANDLE_TRACE_DB_ENTRY {
	struct _CLIENT_ID	ClientId;
	void	*Handle;
	uint32_t	Type;
	void	*StackTrace[16];
}__attribute__((packed));
