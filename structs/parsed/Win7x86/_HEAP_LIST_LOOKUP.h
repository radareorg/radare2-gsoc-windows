
struct _HEAP_LIST_LOOKUP {
	struct _HEAP_LIST_LOOKUPstruct Ptr32	ExtendedLookup;
	uint32_t	ArraySize;
	uint32_t	ExtraItem;
	uint32_t	ItemCount;
	uint32_t	OutOfRangeItems;
	uint32_t	BaseIndex;
	struct _LIST_ENTRYstruct Ptr32	ListHead;
	uint32_tstruct Ptr32	ListsInUseUlong;
	struct _LIST_ENTRYstruct Ptr32struct Ptr32	ListHints;
}__attribute__((packed));
