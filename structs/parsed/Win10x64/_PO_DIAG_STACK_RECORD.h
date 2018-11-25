
struct _PO_DIAG_STACK_RECORD {
	uint32_t	StackDepth;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	void	*Stack[1];
}__attribute__((packed));
