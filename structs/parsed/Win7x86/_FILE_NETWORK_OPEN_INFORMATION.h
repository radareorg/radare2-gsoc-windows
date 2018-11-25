
struct _FILE_NETWORK_OPEN_INFORMATION {
	struct _LARGE_INTEGER	CreationTime;
	struct _LARGE_INTEGER	LastAccessTime;
	struct _LARGE_INTEGER	LastWriteTime;
	struct _LARGE_INTEGER	ChangeTime;
	struct _LARGE_INTEGER	AllocationSize;
	struct _LARGE_INTEGER	EndOfFile;
	uint32_t	FileAttributes;
}__attribute__((packed));
