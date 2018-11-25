
struct _HEAP_LFH_BUCKET {
	struct _HEAP_LFH_SUBSEGMENT_OWNER	State;
	uint64_t	TotalBlockCount;
	uint64_t	TotalSubsegmentCount;
	uint32_t	ReciprocalBlockSize;
	uint8_t	Shift;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	struct _RTL_SRWLOCK	AffinityMappingLock;
	uint32_t	ContentionCount;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	*ProcAffinityMapping;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	struct _HEAP_LFH_AFFINITY_SLOT	**AffinitySlots;
}__attribute__((packed));
