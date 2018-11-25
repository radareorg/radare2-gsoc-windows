
struct _INTERLOCK_SEQ {
	uint16_t	Depth;
	uint16_t	FreeEntryOffset;
	uint32_t	OffsetAndDepth;
	uint32_t	Sequence;
	int64_t	Exchg;
}__attribute__((packed));
