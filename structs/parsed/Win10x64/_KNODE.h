
struct _KNODE {
	uint64_t	IdleNonParkedCpuSet;
	uint64_t	IdleSmtSet;
	uint64_t	IdleCpuSet;
	uint64_t	DeepIdleSet;
	uint64_t	IdleConstrainedSet;
	uint64_t	NonParkedSet;
	int32_t	ParkLock;
	uint32_t	Seed;
	uint32_t	SiblingMask;
	union {
		struct _GROUP_AFFINITY	Affinity;
		uint8_t	AffinityFill[10];
	};
	uint16_t	NodeNumber;
	uint16_t	PrimaryNodeNumber;
	uint8_t	Stride;
	uint8_t	Spare0;
	uint64_t	SharedReadyQueueLeaders;
	uint32_t	ProximityId;
	uint32_t	Lowest;
	uint32_t	Highest;
	uint8_t	MaximumProcessors;
	struct _flags	Flags;
	uint8_t	Spare10;
	struct _KHETERO_PROCESSOR_SET	HeteroSets[5];
}__attribute__((packed));
