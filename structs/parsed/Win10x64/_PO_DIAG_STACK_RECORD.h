
struct _PO_DIAG_STACK_RECORD {
	uint32_t	StackDepth;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*Stack[1];
}__attribute__((packed));
