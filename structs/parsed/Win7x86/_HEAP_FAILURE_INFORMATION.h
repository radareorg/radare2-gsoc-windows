
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
}__attribute__((packed));
