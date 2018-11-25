
struct _IO_DRIVER_CREATE_CONTEXT {
	int16_t	Size;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _ECP_LIST	*ExtraCreateParameter;
	void	*DeviceObjectHint;
	struct _TXN_PARAMETER_BLOCK	*TxnParameters;
	struct _EJOB	*SiloContext;
}__attribute__((packed));
