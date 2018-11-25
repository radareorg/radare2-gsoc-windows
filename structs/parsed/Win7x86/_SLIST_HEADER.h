
struct _SLIST_HEADER {
	union {
		uint64_t	Alignment;
		struct _SINGLE_LIST_ENTRY	Next;
	};
	uint16_t	Depth;
	uint16_t	Sequence;
}__attribute__((packed));
