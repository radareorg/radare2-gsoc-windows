
struct _RTL_AVL_TABLE {
	struct _RTL_BALANCED_LINKS	BalancedRoot;
	void	*OrderedPointer;
	uint32_t	WhichOrderedElement;
	uint32_t	NumberGenericTableElements;
	uint32_t	DepthOfTree;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _RTL_BALANCED_LINKS	*RestartKey;
	uint32_t	DeleteCount;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _RTL_GENERIC_COMPARE_RESULTS	*CompareRoutine;
		*struct void*AllocateRoutine;
	void	*FreeRoutine;
	void	*TableContext;
}__attribute__((packed));
