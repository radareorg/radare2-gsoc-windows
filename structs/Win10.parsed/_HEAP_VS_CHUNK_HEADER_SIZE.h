/* MemoryCost */
#define	UnsafeSize	0xFFFF0000

/* UnsafePrevSize */
#define	Allocated	0x00FF0000

struct _HEAP_VS_CHUNK_HEADER_SIZE {
	struct Bitsstruct 16struct 0,struct Pos	MemoryCost;
	struct Bitsstruct 16struct 0,struct Pos	UnsafePrevSize;
	union {
		union	None;
		uint64_t	HeaderBits;
	};
}__attribute__((packed));
