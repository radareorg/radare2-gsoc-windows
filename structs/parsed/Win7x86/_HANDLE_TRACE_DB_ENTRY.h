
struct _HANDLE_TRACE_DB_ENTRY {
	struct _CLIENT_ID	ClientId;
	voidstruct Ptr32	Handle;
	uint32_t	Type;
	voidstruct Ptr32	StackTrace[16];
}__attribute__((packed));
