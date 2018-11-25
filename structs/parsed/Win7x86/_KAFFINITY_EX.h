
struct _KAFFINITY_EX {
	uint16_t	Count;
	uint16_t	Size;
	uint32_t	Reserved;
	uint32_t	Bitmap[1];
}__attribute__((packed));
