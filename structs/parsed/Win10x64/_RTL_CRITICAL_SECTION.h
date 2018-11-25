
struct _RTL_CRITICAL_SECTION {
	struct _RTL_CRITICAL_SECTION_DEBUG	*DebugInfo;
	int32_t	LockCount;
	int32_t	RecursionCount;
	void	*OwningThread;
	void	*LockSemaphore;
	uint64_t	SpinCount;
}__attribute__((packed));
