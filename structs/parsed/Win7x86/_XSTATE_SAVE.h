
struct _XSTATE_SAVE {
	int64_t	Reserved1;
	uint32_t	Reserved2;
	struct _XSTATE_SAVE	*Prev;
	struct _XSAVE_AREA	*Reserved3;
	struct _KTHREAD	*Thread;
	void	*Reserved4;
	uint8_t	Level;
	struct _XSTATE_CONTEXT	XStateContext;
}__attribute__((packed));
