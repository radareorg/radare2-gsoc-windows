
/* ActualLimit */
#define	StackExpansion	0x00000001

struct _KSTACK_CONTROL {
	uint64_t	StackBase;
	uint64_t	ActualLimit;
	struct _KERNEL_STACK_SEGMENT	Previous;
}__attribute__((packed));
