
/* SizeIndex */
#define	UseAffinity	0x00000001
#define	DebugFlags	0x00000006

struct _HEAP_BUCKET {
	uint16_t	BlockUnits;
	uint8_t	SizeIndex;
	uint8_t	Flags;
}__attribute__((packed));
