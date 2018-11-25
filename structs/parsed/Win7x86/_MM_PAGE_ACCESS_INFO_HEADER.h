
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
		struct _MM_PAGE_ACCESS_INFOstruct Ptr32	TempEntry;
	};
	struct _MM_PAGE_ACCESS_INFOstruct Ptr32	PageEntry;
	uint32_tstruct Ptr32	FileEntry;
	uint32_tstruct Ptr32	FirstFileEntry;
	struct _EPROCESSstruct Ptr32	Process;
	uint32_t	SessionId;
	uint32_tstruct Ptr32	PageFrameEntry;
	uint32_tstruct Ptr32	LastPageFrameEntry;
}__attribute__((packed));
