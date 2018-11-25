
struct _HEAP_LIST_LOOKUP {
	struct _HEAP_LIST_LOOKUP	*ExtendedLookup;
	uint32_t	ArraySize;
	uint32_t	ExtraItem;
	uint32_t	ItemCount;
	uint32_t	OutOfRangeItems;
	uint32_t	BaseIndex;
	struct _LIST_ENTRY	*ListHead;
	uint32_t	*ListsInUseUlong;
	struct _LIST_ENTRY	**ListHints;
}__attribute__((packed));
