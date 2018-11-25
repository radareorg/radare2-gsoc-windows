
struct _HEAP_LFH_BUCKET {
	struct _HEAP_LFH_SUBSEGMENT_OWNER	State;
	uint64_t	TotalBlockCount;
	uint64_t	TotalSubsegmentCount;
	uint32_t	ReciprocalBlockSize;
	uint8_t	Shift;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _RTL_SRWLOCK	AffinityMappingLock;
	uint32_t	ContentionCount;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	*ProcAffinityMapping;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _HEAP_LFH_AFFINITY_SLOT	**AffinitySlots;
}__attribute__((packed));
