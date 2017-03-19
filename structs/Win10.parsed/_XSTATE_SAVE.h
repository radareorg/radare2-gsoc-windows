struct _XSTATE_SAVE {
	struct _XSTATE_SAVE	*Prev;
	struct _KTHREAD	*Thread;
	uint8_t	Level;
	struct _XSTATE_CONTEXT	XStateContext;
}__attribute__((packed));
