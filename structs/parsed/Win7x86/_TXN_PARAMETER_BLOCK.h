
struct _TXN_PARAMETER_BLOCK {
	uint16_t	Length;
	uint16_t	TxFsContext;
	void	*TransactionObject;
}__attribute__((packed));
