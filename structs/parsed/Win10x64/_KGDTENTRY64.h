
struct _KGDTENTRY64 {
	uint16_t	LimitLow;
	uint16_t	BaseLow;
	union {
		struct <unnamed-tag>	Bytes;
		struct <unnamed-tag>	Bits;
	};
	uint32_t	BaseUpper;
	uint32_t	MustBeZero;
	int64_t	DataLow;
	int64_t	DataHigh;
}__attribute__((packed));
