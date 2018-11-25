
struct _HEAP_DEBUGGING_INFORMATION {
	void	*InterceptorFunction;
	uint16_t	InterceptorValue;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint32_t	ExtendedOptions;
	uint32_t	StackTraceDepth;
	uint32_t	MinTotalBlockSize;
	uint32_t	MaxTotalBlockSize;
	struct long	*HeapLeakEnumerationRoutine;
}__attribute__((packed));
