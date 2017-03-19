
struct _MM_PAGE_ACCESS_INFO_HEADER {
	struct _SINGLE_LIST_ENTRY	Link;
	struct _MM_PAGE_ACCESS_TYPE	Type;
	union {
		uint32_t	EmptySequenceNumber;
		uint32_t	CurrentFileIndex;
	};
	uint64_t	CreateTime;
	union {
		uint64_t	EmptyTime;
		struct _MM_PAGE_ACCESS_INFO	*TempEntry;
	};
	struct _MM_PAGE_ACCESS_INFO	*PageEntry;
	uint64_t	*FileEntry;
	uint64_t	*FirstFileEntry;
	struct _EPROCESS	*Process;
	uint32_t	SessionId;
	uint64_t	*PageFrameEntry;
	uint64_t	*LastPageFrameEntry;
}__attribute__((packed));
