
struct _MM_PAGE_ACCESS_INFO_HEADER {
	struct _SINGLE_LIST_ENTRY	Link;
	struct _MM_PAGE_ACCESS_TYPE	Type;
	union {
		uint32_t	EmptySequenceNumber;
		uint32_t	CurrentFileIndex;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	};
	uint64_t	CreateTime;
	union {
		uint64_t	EmptyTime;
		struct _MM_PAGE_ACCESS_INFO	*TempEntry;
	};
	struct _MM_PAGE_ACCESS_INFO	*PageEntry;
	uint32_t	*FileEntry;
	uint32_t	*FirstFileEntry;
	struct _EPROCESS	*Process;
	uint32_t	SessionId;
	uint32_t	*PageFrameEntry;
	uint32_t	*LastPageFrameEntry;
}__attribute__((packed));
