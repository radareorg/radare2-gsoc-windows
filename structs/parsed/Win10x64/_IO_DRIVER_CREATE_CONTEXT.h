
struct _IO_DRIVER_CREATE_CONTEXT {
	int16_t	Size;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	struct _ECP_LIST	*ExtraCreateParameter;
	void	*DeviceObjectHint;
	struct _TXN_PARAMETER_BLOCK	*TxnParameters;
	struct _EJOB	*SiloContext;
}__attribute__((packed));
