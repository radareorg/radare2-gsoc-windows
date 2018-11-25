
struct _HEAP_USERDATA_HEADER {
	union {
		struct _SINGLE_LIST_ENTRY	SFreeListEntry;
		struct _HEAP_SUBSEGMENT	*SubSegment;
	};
	void	*Reserved;
	union {
		uint32_t	SizeIndexAndPadding;
		uint8_t	SizeIndex;
	};
	uint8_t	GuardPagePresent;
	uint16_t	PaddingBytes;
	uint32_t	Signature;
	struct _HEAP_USERDATA_OFFSETS	EncodedOffsets;
	struct _RTL_BITMAP_EX	BusyBitmap;
	uint64_t	BitmapData[1];
}__attribute__((packed));
