
struct _IMAGE_RUNTIME_FUNCTION_ENTRY {
	uint32_t	BeginAddress;
	uint32_t	EndAddress;
	union {
		uint32_t	UnwindInfoAddress;
		uint32_t	UnwindData;
	};
}__attribute__((packed));
