
struct _FILE_STANDARD_INFORMATION {
	struct _LARGE_INTEGER	AllocationSize;
	struct _LARGE_INTEGER	EndOfFile;
	uint32_t	NumberOfLinks;
	uint8_t	DeletePending;
	uint8_t	Directory;
}__attribute__((packed));
