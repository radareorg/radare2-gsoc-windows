
struct _KERNEL_STACK_SEGMENT {
	uint64_t	StackBase;
	uint64_t	StackLimit;
	uint64_t	KernelStack;
	uint64_t	InitialStack;
}__attribute__((packed));
