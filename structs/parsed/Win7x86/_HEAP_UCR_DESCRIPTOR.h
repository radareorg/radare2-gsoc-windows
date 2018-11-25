
struct _HEAP_UCR_DESCRIPTOR {
	struct _LIST_ENTRY	ListEntry;
	struct _LIST_ENTRY	SegmentEntry;
	void	*Address;
	uint32_t	Size;
}__attribute__((packed));
