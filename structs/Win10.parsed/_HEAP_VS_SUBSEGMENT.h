
struct _HEAP_VS_SUBSEGMENT {
	struct _LIST_ENTRY	ListEntry;
	uint64_t	CommitBitmap;
	struct _RTL_SRWLOCK	CommitLock;
	uint16_t	Size;
	uint16_t	Signature;
}__attribute__((packed));
