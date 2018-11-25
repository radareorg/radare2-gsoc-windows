
struct _PROCESSOR_IDLE_PREPARE_INFO {
	void	*Context;
	struct _PROCESSOR_IDLE_CONSTRAINTS	Constraints;
	uint32_t	DependencyCount;
	uint32_t	DependencyUsed;
	struct _PROCESSOR_IDLE_DEPENDENCY	*DependencyArray;
	uint32_t	PlatformIdleStateIndex;
	uint32_t	ProcessorIdleStateIndex;
	uint32_t	IdleSelectFailureMask;
}__attribute__((packed));
