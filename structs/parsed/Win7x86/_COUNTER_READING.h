
struct _COUNTER_READING {
	struct _HARDWARE_COUNTER_TYPE	Type;
	uint32_t	Index;
	uint64_t	Start;
	uint64_t	Total;
}__attribute__((packed));
