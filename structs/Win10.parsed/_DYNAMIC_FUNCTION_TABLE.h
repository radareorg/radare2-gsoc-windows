
struct _DYNAMIC_FUNCTION_TABLE {
	struct _LIST_ENTRY	ListEntry;
	struct _IMAGE_RUNTIME_FUNCTION_ENTRY	*FunctionTable;
	struct _LARGE_INTEGER	TimeStamp;
	uint64_t	MinimumAddress;
	uint64_t	MaximumAddress;
	uint64_t	BaseAddress;
		*struct _IMAGE_RUNTIME_FUNCTION_ENTRY*Callback;
	void	*Context;
	struct Wchar	*OutOfProcessCallbackDll;
	struct _FUNCTION_TABLE_TYPE	Type;
	uint32_t	EntryCount;
	struct _RTL_BALANCED_NODE	TreeNode;
}__attribute__((packed));
