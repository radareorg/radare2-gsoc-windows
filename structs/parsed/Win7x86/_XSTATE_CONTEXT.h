
struct _XSTATE_CONTEXT {
	uint64_t	Mask;
	uint32_t	Length;
	uint32_t	Reserved1;
	struct _XSAVE_AREA	*Area;
	uint32_t	Reserved2;
	void	*Buffer;
	uint32_t	Reserved3;
}__attribute__((packed));
