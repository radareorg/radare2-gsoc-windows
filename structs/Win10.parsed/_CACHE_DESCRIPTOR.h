
struct _CACHE_DESCRIPTOR {
	uint8_t	Level;
	uint8_t	Associativity;
	uint16_t	LineSize;
	uint32_t	Size;
	struct _PROCESSOR_CACHE_TYPE	Type;
}__attribute__((packed));
