
struct _HEAP_USERDATA_HEADER {
	union {
		struct _SINGLE_LIST_ENTRY	SFreeListEntry;
		struct _HEAP_SUBSEGMENT	*SubSegment;
	};
	void	*Reserved;
	uint32_t	SizeIndex;
	uint32_t	Signature;
}__attribute__((packed));
