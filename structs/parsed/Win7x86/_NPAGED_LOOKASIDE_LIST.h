
struct _NPAGED_LOOKASIDE_LIST {
	struct _GENERAL_LOOKASIDE	L;
	uint32_t	Lock__ObsoleteButDoNotDelete;
}__attribute__((packed));
