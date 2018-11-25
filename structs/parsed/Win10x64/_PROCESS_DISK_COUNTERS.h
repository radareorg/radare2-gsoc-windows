
struct _PROCESS_DISK_COUNTERS {
	uint64_t	BytesRead;
	uint64_t	BytesWritten;
	uint64_t	ReadOperationCount;
	uint64_t	WriteOperationCount;
	uint64_t	FlushOperationCount;
}__attribute__((packed));
