
struct _LFH_BLOCK_ZONE {
	struct _LIST_ENTRY	ListEntry;
	void	*FreePointer;
	void	*Limit;
}__attribute__((packed));
