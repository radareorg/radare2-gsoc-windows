
struct _PO_DIAG_STACK_RECORD {
	uint32_t	StackDepth;
	void	*Stack[1];
}__attribute__((packed));
