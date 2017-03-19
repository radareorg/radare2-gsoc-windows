
struct _HEAP_VS_CHUNK_FREE_HEADER {
	union {
		struct _HEAP_VS_CHUNK_HEADER	Header;
		uint64_t	OverlapsHeader;
	};
	struct _RTL_BALANCED_NODE	Node;
}__attribute__((packed));
