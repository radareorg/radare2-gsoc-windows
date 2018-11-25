
struct _XSTATE_SAVE {
	struct _XSTATE_SAVE	*Prev;
	struct _KTHREAD	*Thread;
	uint8_t	Level;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _XSTATE_CONTEXT	XStateContext;
}__attribute__((packed));
