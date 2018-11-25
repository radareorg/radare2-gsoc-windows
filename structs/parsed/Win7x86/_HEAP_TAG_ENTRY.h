
struct _HEAP_TAG_ENTRY {
	uint32_t	Allocs;
	uint32_t	Frees;
	uint32_t	Size;
	uint16_t	TagIndex;
	uint16_t	CreatorBackTraceIndex;
	struct Wchar	TagName[24];
}__attribute__((packed));
