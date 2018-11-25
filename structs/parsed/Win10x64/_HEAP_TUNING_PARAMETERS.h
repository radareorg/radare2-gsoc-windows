
struct _HEAP_TUNING_PARAMETERS {
	uint32_t	CommittThresholdShift;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	MaxPreCommittThreshold;
}__attribute__((packed));
