
struct _HANDLE_TABLE_ENTRY {
	union {
		void	*Object;
		uint32_t	ObAttributes;
		struct _HANDLE_TABLE_ENTRY_INFO	*InfoTable;
		uint32_t	Value;
	};
	union {
		uint32_t	GrantedAccess;
		uint16_t	GrantedAccessIndex;
	};
	uint16_t	CreatorBackTraceIndex;
	uint32_t	NextFreeTableEntry;
}__attribute__((packed));
