
struct _PAGED_LOOKASIDE_LIST {
	struct _GENERAL_LOOKASIDE	L;
	struct _FAST_MUTEX	Lock__ObsoleteButDoNotDelete;
}__attribute__((packed));
