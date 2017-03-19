struct _LDR_DDAG_NODE {
	struct _LIST_ENTRY	Modules;
	struct _LDR_SERVICE_TAG_RECORD	*ServiceTagList;
	uint32_t	LoadCount;
	uint32_t	LoadWhileUnloadingCount;
	uint32_t	LowestLink;
	struct _LDRP_CSLIST	Dependencies;
	struct _LDRP_CSLIST	IncomingDependencies;
	struct _LDR_DDAG_STATE	State;
	struct _SINGLE_LIST_ENTRY	CondenseLink;
	uint32_t	PreorderNumber;
}__attribute__((packed));
