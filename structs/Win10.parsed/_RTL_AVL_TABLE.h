
struct _RTL_AVL_TABLE {
	struct _RTL_BALANCED_LINKS	BalancedRoot;
	void	*OrderedPointer;
	uint32_t	WhichOrderedElement;
	uint32_t	NumberGenericTableElements;
	uint32_t	DepthOfTree;
	struct _RTL_BALANCED_LINKS	*RestartKey;
	uint32_t	DeleteCount;
	struct _RTL_GENERIC_COMPARE_RESULTS	*CompareRoutine;
		*struct void*AllocateRoutine;
	void	*FreeRoutine;
	void	*TableContext;
}__attribute__((packed));
