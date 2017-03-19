
struct _XSTATE_CONTEXT {
	uint64_t	Mask;
	uint32_t	Length;
	uint32_t	Reserved1;
	struct _XSAVE_AREA	*Area;
	void	*Buffer;
}__attribute__((packed));
