
/* HeaderBits */
#define	MemoryCost	0x0000FFFF
#define	UnsafeSize	0xFFFF0000

/* UnsafeSize */
#define	UnsafePrevSize	0x0000FFFF
#define	Allocated	0x00FF0000

struct _HEAP_VS_CHUNK_HEADER_SIZE {
	union {
		uint16_t	KeyUShort;
		uint32_t	KeyULong;
		uint64_t	HeaderBits;
	};
}__attribute__((packed));
