
struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME {
	struct _RTL_ACTIVATION_CONTEXT_STACK_FRAME	*Previous;
	struct _ACTIVATION_CONTEXT	*ActivationContext;
	uint32_t	Flags;
}__attribute__((packed));
