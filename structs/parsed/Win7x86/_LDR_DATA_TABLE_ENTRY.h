
struct _LDR_DATA_TABLE_ENTRY {
	struct _LIST_ENTRY	InLoadOrderLinks;
	struct _LIST_ENTRY	InMemoryOrderLinks;
	struct _LIST_ENTRY	InInitializationOrderLinks;
	voidstruct Ptr32	DllBase;
	voidstruct Ptr32	EntryPoint;
	uint32_t	SizeOfImage;
	struct _UNICODE_STRING	FullDllName;
	struct _UNICODE_STRING	BaseDllName;
	uint32_t	Flags;
	uint16_t	LoadCount;
	uint16_t	TlsIndex;
	union {
		struct _LIST_ENTRY	HashLinks;
		voidstruct Ptr32	SectionPointer;
	};
	uint32_t	CheckSum;
	union {
		uint32_t	TimeDateStamp;
		voidstruct Ptr32	LoadedImports;
	};
	struct _ACTIVATION_CONTEXTstruct Ptr32	EntryPointActivationContext;
	voidstruct Ptr32	PatchInformation;
	struct _LIST_ENTRY	ForwarderLinks;
	struct _LIST_ENTRY	ServiceTagLinks;
	struct _LIST_ENTRY	StaticLinks;
	voidstruct Ptr32	ContextInformation;
	uint32_t	OriginalBase;
	struct _LARGE_INTEGER	LoadTime;
}__attribute__((packed));
