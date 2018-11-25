
struct _TXN_PARAMETER_BLOCK {
	uint16_t	Length;
	uint16_t	TxFsContext;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	void	*TransactionObject;
}__attribute__((packed));
