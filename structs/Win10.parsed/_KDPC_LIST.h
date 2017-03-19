
struct _KDPC_LIST {
	struct _SINGLE_LIST_ENTRY	ListHead;
	struct _SINGLE_LIST_ENTRY	*LastEntry;
}__attribute__((packed));
