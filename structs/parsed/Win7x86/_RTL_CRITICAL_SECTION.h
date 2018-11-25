
struct _RTL_CRITICAL_SECTION {
	struct _RTL_CRITICAL_SECTION_DEBUGstruct Ptr32	DebugInfo;
	int32_t	LockCount;
	int32_t	RecursionCount;
	voidstruct Ptr32	OwningThread;
	voidstruct Ptr32	LockSemaphore;
	uint32_t	SpinCount;
}__attribute__((packed));
