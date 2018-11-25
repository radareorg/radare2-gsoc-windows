
struct _HEAP_DESCRIPTOR_KEY {
	union {
		uint16_t	Key;
		uint8_t	EncodedCommitCount;
	};
	uint8_t	PageCount;
}__attribute__((packed));
