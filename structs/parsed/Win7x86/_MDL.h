
struct _MDL {
	struct _MDLstruct Ptr32	Next;
	int16_t	Size;
	int16_t	MdlFlags;
	struct _EPROCESSstruct Ptr32	Process;
	voidstruct Ptr32	MappedSystemVa;
	voidstruct Ptr32	StartVa;
	uint32_t	ByteCount;
	uint32_t	ByteOffset;
}__attribute__((packed));
