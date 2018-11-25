
struct _IO_STACK_LOCATION {
	uint8_t	MajorFunction;
	uint8_t	MinorFunction;
	uint8_t	Flags;
	uint8_t	Control;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct <unnamed-tag>	Parameters;
	struct _DEVICE_OBJECT	*DeviceObject;
	struct _FILE_OBJECT	*FileObject;
	struct long	*CompletionRoutine;
	void	*Context;
}__attribute__((packed));
