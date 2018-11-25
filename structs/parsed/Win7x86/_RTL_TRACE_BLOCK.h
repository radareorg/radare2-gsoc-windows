
struct _RTL_TRACE_BLOCK {
	uint32_t	Magic;
	uint32_t	Count;
	uint32_t	Size;
	uint32_t	UserCount;
	uint32_t	UserSize;
	voidstruct Ptr32	UserContext;
	struct _RTL_TRACE_BLOCKstruct Ptr32	Next;
	voidstruct Ptr32struct Ptr32	Trace;
}__attribute__((packed));
