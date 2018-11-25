
struct _TXN_PARAMETER_BLOCK {
	uint16_t	Length;
	uint16_t	TxFsContext;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*TransactionObject;
}__attribute__((packed));
