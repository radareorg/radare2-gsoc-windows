
struct _IMAGE_FILE_HEADER {
	uint16_t	Machine;
	uint16_t	NumberOfSections;
	uint32_t	TimeDateStamp;
	uint32_t	PointerToSymbolTable;
	uint32_t	NumberOfSymbols;
	uint16_t	SizeOfOptionalHeader;
	uint16_t	Characteristics;
}__attribute__((packed));
