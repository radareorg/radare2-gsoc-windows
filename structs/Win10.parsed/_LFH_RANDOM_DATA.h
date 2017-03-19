struct _LFH_RANDOM_DATA {
	union {
		union	None;
		uint64_t	Quadwords[32];
	};
}__attribute__((packed));
