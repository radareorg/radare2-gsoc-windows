
struct _ACTIVATION_CONTEXT_STACK {
	struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME	*ActiveFrame;
	struct _LIST_ENTRY	FrameListCache;
	uint32_t	Flags;
	uint32_t	NextCookieSequenceNumber;
	uint32_t	StackId;
}__attribute__((packed));
