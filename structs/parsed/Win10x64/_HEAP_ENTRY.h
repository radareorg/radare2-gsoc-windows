
struct _HEAP_ENTRY {
	union {
		struct _HEAP_UNPACKED_ENTRY	UnpackedEntry;
		void	*PreviousBlockPrivateData;
	};
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
	union {
		struct _HEAP_EXTENDED_ENTRY	ExtendedEntry;
		void	*Reserved;
	};
	uint16_t	FunctionIndex;
	uint16_t	ContextValue;
	uint32_t	InterceptorValue;
	uint16_t	UnusedBytesLength;
	uint8_t	EntryOffset;
	uint8_t	ExtendedBlockSignature;
	void	*ReservedForAlignment;
	uint32_t	Code1;
	uint16_t	Code2;
	uint8_t	Code3;
	uint8_t	Code4;
	uint32_t	Code234;
	uint64_t	AgregateCode;
}__attribute__((packed));
