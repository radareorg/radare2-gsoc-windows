
struct _HEAP_FAILURE_INFORMATION {
	uint32_t	Version;
	uint32_t	StructureSize;
	struct _HEAP_FAILURE_TYPE	FailureType;
	voidstruct Ptr32	HeapAddress;
	voidstruct Ptr32	Address;
	voidstruct Ptr32	Param1;
	voidstruct Ptr32	Param2;
	voidstruct Ptr32	Param3;
	struct _HEAP_ENTRYstruct Ptr32	PreviousBlock;
	struct _HEAP_ENTRYstruct Ptr32	NextBlock;
	struct _HEAP_ENTRY	ExpectedEncodedEntry;
	struct _HEAP_ENTRY	ExpectedDecodedEntry;
	voidstruct Ptr32	StackTrace[32];
}__attribute__((packed));
