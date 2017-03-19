
struct _FILE_BASIC_INFORMATION {
	struct _LARGE_INTEGER	CreationTime;
	struct _LARGE_INTEGER	LastAccessTime;
	struct _LARGE_INTEGER	LastWriteTime;
	struct _LARGE_INTEGER	ChangeTime;
	uint32_t	FileAttributes;
}__attribute__((packed));
