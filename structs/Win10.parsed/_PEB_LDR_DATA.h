struct _PEB_LDR_DATA {
	uint32_t	Length;
	uint8_t	Initialized;
	void	*SsHandle;
	struct _LIST_ENTRY	InLoadOrderModuleList;
	struct _LIST_ENTRY	InMemoryOrderModuleList;
	struct _LIST_ENTRY	InInitializationOrderModuleList;
	void	*EntryInProgress;
	uint8_t	ShutdownInProgress;
	void	*ShutdownThreadId;
}__attribute__((packed));
