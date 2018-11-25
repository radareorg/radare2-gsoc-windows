
struct _KAFFINITY_EX {
	uint16_t	Count;
	uint16_t	Size;
	uint32_t	Reserved;
	uint64_t	Bitmap[20];
}__attribute__((packed));
