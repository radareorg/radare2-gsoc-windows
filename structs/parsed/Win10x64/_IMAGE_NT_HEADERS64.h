
struct _IMAGE_NT_HEADERS64 {
	uint32_t	Signature;
	struct _IMAGE_FILE_HEADER	FileHeader;
	struct _IMAGE_OPTIONAL_HEADER64	OptionalHeader;
}__attribute__((packed));
