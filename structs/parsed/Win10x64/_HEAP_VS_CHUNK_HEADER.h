
/* Sizes */
#define	EncodedSegmentPageOffset	0x000000FF
#define	UnusedBytes	0x00000100
#define	SkipDuringWalk	0x00000200
#define	Spare	0xFFFFFC00

struct _HEAP_VS_CHUNK_HEADER {
	struct _HEAP_VS_CHUNK_HEADER_SIZE	Sizes;
	uint32_t	AllocatedChunkBits;
}__attribute__((packed));
