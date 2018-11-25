
struct _DRIVER_OBJECT {
	int16_t	Type;
	int16_t	Size;
	struct _DEVICE_OBJECTstruct Ptr32	DeviceObject;
	uint32_t	Flags;
	voidstruct Ptr32	DriverStart;
	uint32_t	DriverSize;
	voidstruct Ptr32	DriverSection;
	struct _DRIVER_EXTENSIONstruct Ptr32	DriverExtension;
	struct _UNICODE_STRING	DriverName;
	struct _UNICODE_STRINGstruct Ptr32	HardwareDatabase;
	struct _FAST_IO_DISPATCHstruct Ptr32	FastIoDispatch;
	struct longstruct Ptr32	DriverInit;
	voidstruct Ptr32	DriverStartIo;
	voidstruct Ptr32	DriverUnload;
	struct longstruct Ptr32	MajorFunction[28];
}__attribute__((packed));
