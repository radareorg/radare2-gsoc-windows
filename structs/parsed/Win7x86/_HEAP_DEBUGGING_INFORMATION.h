
struct _HEAP_DEBUGGING_INFORMATION {
	voidstruct Ptr32	InterceptorFunction;
	uint16_t	InterceptorValue;
	uint32_t	ExtendedOptions;
	uint32_t	StackTraceDepth;
	uint32_t	MinTotalBlockSize;
	uint32_t	MaxTotalBlockSize;
	struct longstruct Ptr32	HeapLeakEnumerationRoutine;
}__attribute__((packed));
