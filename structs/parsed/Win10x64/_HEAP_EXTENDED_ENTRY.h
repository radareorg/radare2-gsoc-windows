
struct _HEAP_EXTENDED_ENTRY {
	void	*Reserved;
	uint16_t	FunctionIndex;
	uint16_t	ContextValue;
	uint32_t	InterceptorValue;
	uint16_t	UnusedBytesLength;
	uint8_t	EntryOffset;
	uint8_t	ExtendedBlockSignature;
}__attribute__((packed));
