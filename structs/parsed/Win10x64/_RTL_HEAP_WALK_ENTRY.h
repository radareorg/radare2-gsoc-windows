
struct _RTL_HEAP_WALK_ENTRY {
	void	*DataAddress;
	uint64_t	DataSize;
	uint8_t	OverheadBytes;
	uint8_t	SegmentIndex;
	uint16_t	Flags;
	union {
		struct <unnamed-tag>	Block;
		struct <unnamed-tag>	Segment;
	};
}__attribute__((packed));
