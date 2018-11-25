
struct _IO_STACK_LOCATION {
	uint8_t	MajorFunction;
	uint8_t	MinorFunction;
	uint8_t	Flags;
	uint8_t	Control;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct <unnamed-tag>	Parameters;
	struct _DEVICE_OBJECT	*DeviceObject;
	struct _FILE_OBJECT	*FileObject;
	struct long	*CompletionRoutine;
	void	*Context;
}__attribute__((packed));
