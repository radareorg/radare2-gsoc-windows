
struct _RTL_DYNAMIC_HASH_TABLE_CONTEXT {
	struct _LIST_ENTRY	*ChainHead;
	struct _LIST_ENTRY	*PrevLinkage;
	uint64_t	Signature;
}__attribute__((packed));
