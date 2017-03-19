
struct _RTL_STACKDB_CONTEXT {
	struct _RTL_HASH_TABLE	StackSegmentTable;
	struct _RTL_HASH_TABLE	StackEntryTable;
	struct _RTL_SRWLOCK	StackEntryTableLock;
	struct _RTL_SRWLOCK	SegmentTableLock;
		*struct void*Allocate;
	void	*Free;
	void	*AllocatorContext;
}__attribute__((packed));
