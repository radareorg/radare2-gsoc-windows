
struct _COMPRESSED_DATA_INFO {
	uint16_t	CompressionFormatAndEngine;
	uint8_t	CompressionUnitShift;
	uint8_t	ChunkShift;
	uint8_t	ClusterShift;
	uint8_t	Reserved;
	uint16_t	NumberOfChunks;
	uint32_t	CompressedChunkSizes[1];
}__attribute__((packed));
