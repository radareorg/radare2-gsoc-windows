
struct _LFH_RANDOM_DATA {
	union {
		uint8_t	Bytes[256];
		uint16_t	Words[128];
		uint64_t	Quadwords[32];
	};
}__attribute__((packed));
