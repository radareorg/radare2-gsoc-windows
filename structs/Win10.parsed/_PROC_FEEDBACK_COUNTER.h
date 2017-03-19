struct _PROC_FEEDBACK_COUNTER {
	union {
		void	*InstantaneousRead;
		void	*DifferentialRead;
	};
	uint64_t	LastActualCount;
	uint64_t	LastReferenceCount;
	uint32_t	CachedValue;
	uint8_t	Affinitized;
	uint8_t	Differential;
	uint8_t	Scaling;
	uint64_t	Context;
}__attribute__((packed));
