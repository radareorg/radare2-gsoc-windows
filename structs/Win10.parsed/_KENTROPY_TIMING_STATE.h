struct _KENTROPY_TIMING_STATE {
	uint32_t	EntropyCount;
	uint32_t	Buffer[64];
	struct _KDPC	Dpc;
	uint32_t	LastDeliveredBuffer;
}__attribute__((packed));
