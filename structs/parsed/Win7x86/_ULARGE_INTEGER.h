
struct _ULARGE_INTEGER {
	uint32_t	LowPart;
	uint32_t	HighPart;
	union {
		struct <unnamed-tag>	u;
		uint64_t	QuadPart;
	};
}__attribute__((packed));
