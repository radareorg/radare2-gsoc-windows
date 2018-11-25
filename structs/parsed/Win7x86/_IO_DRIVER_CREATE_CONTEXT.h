
struct _IO_DRIVER_CREATE_CONTEXT {
	int16_t	Size;
	struct _ECP_LIST	*ExtraCreateParameter;
	void	*DeviceObjectHint;
	struct _TXN_PARAMETER_BLOCK	*TxnParameters;
}__attribute__((packed));
