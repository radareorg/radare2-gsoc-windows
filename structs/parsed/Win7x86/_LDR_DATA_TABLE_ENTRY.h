
struct _LDR_DATA_TABLE_ENTRY {
	struct _LIST_ENTRY	InLoadOrderLinks;
	struct _LIST_ENTRY	InMemoryOrderLinks;
	struct _LIST_ENTRY	InInitializationOrderLinks;
	void	*DllBase;
	void	*EntryPoint;
	uint32_t	SizeOfImage;
	struct _UNICODE_STRING	FullDllName;
	struct _UNICODE_STRING	BaseDllName;
	uint32_t	Flags;
	uint16_t	LoadCount;
	uint16_t	TlsIndex;
	union {
		struct _LIST_ENTRY	HashLinks;
		void	*SectionPointer;
	};
	uint32_t	CheckSum;
	union {
		uint32_t	TimeDateStamp;
		void	*LoadedImports;
	};
	struct _ACTIVATION_CONTEXT	*EntryPointActivationContext;
	void	*PatchInformation;
	struct _LIST_ENTRY	ForwarderLinks;
	struct _LIST_ENTRY	ServiceTagLinks;
	struct _LIST_ENTRY	StaticLinks;
	void	*ContextInformation;
	uint32_t	OriginalBase;
	struct _LARGE_INTEGER	LoadTime;
}__attribute__((packed));
