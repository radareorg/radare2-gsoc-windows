
struct _LARGE_INTEGER {
	uint32_t	LowPart;
	int32_t	HighPart;
	union {
		struct <unnamed-tag>	u;
		int64_t	QuadPart;
	};
}__attribute__((packed));
