
struct _PROC_FEEDBACK_COUNTER {
	union {
		void	*InstantaneousRead;
		void	*DifferentialRead;
	};
	uint64_t	LastActualCount;
	uint64_t	LastReferenceCount;
	uint32_t	CachedValue;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	Affinitized;
	uint8_t	Differential;
	uint8_t	Scaling;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint64_t	Context;
}__attribute__((packed));
