
struct _INVERTED_FUNCTION_TABLE_ENTRY {
	union {
		struct _IMAGE_RUNTIME_FUNCTION_ENTRY	*FunctionTable;
		struct _DYNAMIC_FUNCTION_TABLE	*DynamicTable;
	};
	void	*ImageBase;
	uint32_t	SizeOfImage;
	uint32_t	SizeOfTable;
}__attribute__((packed));
