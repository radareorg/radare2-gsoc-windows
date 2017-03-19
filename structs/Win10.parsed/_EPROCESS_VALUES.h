
struct _EPROCESS_VALUES {
	uint64_t	KernelTime;
	uint64_t	UserTime;
	uint64_t	ReadyTime;
	uint64_t	CycleTime;
	uint64_t	ContextSwitches;
	int64_t	ReadOperationCount;
	int64_t	WriteOperationCount;
	int64_t	OtherOperationCount;
	int64_t	ReadTransferCount;
	int64_t	WriteTransferCount;
	int64_t	OtherTransferCount;
}__attribute__((packed));
