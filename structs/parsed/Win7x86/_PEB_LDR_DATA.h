
struct _PEB_LDR_DATA {
	uint32_t	Length;
	uint8_t	Initialized;
	voidstruct Ptr32	SsHandle;
	struct _LIST_ENTRY	InLoadOrderModuleList;
	struct _LIST_ENTRY	InMemoryOrderModuleList;
	struct _LIST_ENTRY	InInitializationOrderModuleList;
	voidstruct Ptr32	EntryInProgress;
	uint8_t	ShutdownInProgress;
	voidstruct Ptr32	ShutdownThreadId;
}__attribute__((packed));
