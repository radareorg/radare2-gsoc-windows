
struct _RTL_AVL_TABLE {
	struct _RTL_BALANCED_LINKS	BalancedRoot;
	voidstruct Ptr32	OrderedPointer;
	uint32_t	WhichOrderedElement;
	uint32_t	NumberGenericTableElements;
	uint32_t	DepthOfTree;
	struct _RTL_BALANCED_LINKSstruct Ptr32	RestartKey;
	uint32_t	DeleteCount;
	struct _RTL_GENERIC_COMPARE_RESULTSstruct Ptr32	CompareRoutine;
	struct Ptr32	struct void*AllocateRoutine;
	voidstruct Ptr32	FreeRoutine;
	voidstruct Ptr32	TableContext;
}__attribute__((packed));
