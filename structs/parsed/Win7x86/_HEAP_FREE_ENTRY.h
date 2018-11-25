
struct _HEAP_FREE_ENTRY {
	uint16_t	Size;
	uint8_t	Flags;
	uint8_t	SmallTagIndex;
	void	*SubSegmentCode;
	uint16_t	PreviousSize;
	union {
		uint8_t	SegmentOffset;
		uint8_t	LFHFlags;
	};
	uint8_t	UnusedBytes;
	uint16_t	FunctionIndex;
	uint16_t	ContextValue;
	uint32_t	InterceptorValue;
	uint16_t	UnusedBytesLength;
	uint8_t	EntryOffset;
	uint8_t	ExtendedBlockSignature;
	uint32_t	Code1;
	uint16_t	Code2;
	uint8_t	Code3;
	uint8_t	Code4;
	uint64_t	AgregateCode;
	struct _LIST_ENTRY	FreeList;
}__attribute__((packed));
