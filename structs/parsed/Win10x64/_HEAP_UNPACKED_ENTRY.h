
struct _HEAP_UNPACKED_ENTRY {
	void	*PreviousBlockPrivateData;
	uint16_t	Size;
	uint8_t	Flags;
	uint8_t	SmallTagIndex;
	uint32_t	SubSegmentCode;
	uint16_t	PreviousSize;
	union {
		uint8_t	SegmentOffset;
		uint8_t	LFHFlags;
	};
	uint8_t	UnusedBytes;
	uint64_t	CompactHeader;
}__attribute__((packed));
