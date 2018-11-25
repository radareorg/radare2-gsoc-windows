
struct _IO_DRIVER_CREATE_CONTEXT {
	int16_t	Size;
	struct _ECP_LISTstruct Ptr32	ExtraCreateParameter;
	voidstruct Ptr32	DeviceObjectHint;
	struct _TXN_PARAMETER_BLOCKstruct Ptr32	TxnParameters;
}__attribute__((packed));
