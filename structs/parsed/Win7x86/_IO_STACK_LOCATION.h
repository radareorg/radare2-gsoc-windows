
struct _IO_STACK_LOCATION {
	uint8_t	MajorFunction;
	uint8_t	MinorFunction;
	uint8_t	Flags;
	uint8_t	Control;
	struct <unnamed-tag>	Parameters;
	struct _DEVICE_OBJECTstruct Ptr32	DeviceObject;
	struct _FILE_OBJECTstruct Ptr32	FileObject;
	struct longstruct Ptr32	CompletionRoutine;
	voidstruct Ptr32	Context;
}__attribute__((packed));
