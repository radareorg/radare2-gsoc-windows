
struct _PROCESSOR_IDLE_DEPENDENCY {
	uint32_t	ProcessorIndex;
	uint8_t	ExpectedState;
	uint8_t	AllowDeeperStates;
	uint8_t	LooseDependency;
}__attribute__((packed));
