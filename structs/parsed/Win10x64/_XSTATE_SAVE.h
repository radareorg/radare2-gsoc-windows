
struct _XSTATE_SAVE {
	struct _XSTATE_SAVE	*Prev;
	struct _KTHREAD	*Thread;
	uint8_t	Level;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	struct _XSTATE_CONTEXT	XStateContext;
}__attribute__((packed));
