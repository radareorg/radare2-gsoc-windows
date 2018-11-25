
struct _LFH_BLOCK_ZONE {
	struct _LIST_ENTRY	ListEntry;
	voidstruct Ptr32	FreePointer;
	voidstruct Ptr32	Limit;
}__attribute__((packed));
