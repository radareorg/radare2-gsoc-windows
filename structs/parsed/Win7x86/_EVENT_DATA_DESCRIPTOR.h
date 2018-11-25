
struct _EVENT_DATA_DESCRIPTOR {
	uint64_t	Ptr;
	uint32_t	Size;
	union {
		uint32_t	Reserved;
		uint8_t	Type;
	};
	uint8_t	Reserved1;
	uint16_t	Reserved2;
}__attribute__((packed));
