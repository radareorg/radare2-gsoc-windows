
struct _XSTATE_CONTEXT {
	uint64_t	Mask;
	uint32_t	Length;
	uint32_t	Reserved1;
	struct _XSAVE_AREAstruct Ptr32	Area;
	uint32_t	Reserved2;
	voidstruct Ptr32	Buffer;
	uint32_t	Reserved3;
}__attribute__((packed));
