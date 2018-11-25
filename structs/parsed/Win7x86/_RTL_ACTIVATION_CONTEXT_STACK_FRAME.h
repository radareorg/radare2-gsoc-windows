
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
	struct _RTL_ACTIVATION_CONTEXT_STACK_FRAMEstruct Ptr32	Previous;
	struct _ACTIVATION_CONTEXTstruct Ptr32	ActivationContext;
	uint32_t	Flags;
}__attribute__((packed));
