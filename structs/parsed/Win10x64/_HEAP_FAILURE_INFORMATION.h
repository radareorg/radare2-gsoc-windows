
struct _HEAP_FAILURE_INFORMATION {
	uint32_t	Version;
	uint32_t	StructureSize;
	struct _HEAP_FAILURE_TYPE	FailureType;
	void	*HeapAddress;
	void	*Address;
	void	*Param1;
	void	*Param2;
	void	*Param3;
	struct _HEAP_ENTRY	*PreviousBlock;
	struct _HEAP_ENTRY	*NextBlock;
	struct _HEAP_ENTRY	ExpectedEncodedEntry;
	struct _HEAP_ENTRY	ExpectedDecodedEntry;
	void	*StackTrace[32];
	uint8_t	HeapMajorVersion;
	uint8_t	HeapMinorVersion;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	struct _EXCEPTION_RECORD	ExceptionRecord;
	struct _CONTEXT	ContextRecord;
}__attribute__((packed));
