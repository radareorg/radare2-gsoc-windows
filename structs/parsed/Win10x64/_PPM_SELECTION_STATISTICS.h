
struct _PPM_SELECTION_STATISTICS {
	uint64_t	SelectedCount;
	uint64_t	VetoCount;
	uint64_t	PreVetoCount;
	uint64_t	WrongProcessorCount;
	uint64_t	LatencyCount;
	uint64_t	IdleDurationCount;
	uint64_t	DeviceDependencyCount;
	uint64_t	ProcessorDependencyCount;
	uint64_t	PlatformOnlyCount;
	uint64_t	InterruptibleCount;
	uint64_t	LegacyOverrideCount;
	uint64_t	CstateCheckCount;
	uint64_t	NoCStateCount;
	uint64_t	CoordinatedDependencyCount;
	struct _PPM_VETO_ACCOUNTING	*PreVetoAccounting;
}__attribute__((packed));
