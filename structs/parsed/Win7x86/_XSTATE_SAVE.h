
struct _XSTATE_SAVE {
	int64_t	Reserved1;
	uint32_t	Reserved2;
	struct _XSTATE_SAVEstruct Ptr32	Prev;
	struct _XSAVE_AREAstruct Ptr32	Reserved3;
	struct _KTHREADstruct Ptr32	Thread;
	voidstruct Ptr32	Reserved4;
	uint8_t	Level;
	struct _XSTATE_CONTEXT	XStateContext;
}__attribute__((packed));
