
struct _DRIVER_OBJECT {
	int16_t	Type;
	int16_t	Size;
	struct _DEVICE_OBJECT	*DeviceObject;
	uint32_t	Flags;
	void	*DriverStart;
	uint32_t	DriverSize;
	void	*DriverSection;
	struct _DRIVER_EXTENSION	*DriverExtension;
	struct _UNICODE_STRING	DriverName;
	struct _UNICODE_STRING	*HardwareDatabase;
	struct _FAST_IO_DISPATCH	*FastIoDispatch;
	struct long	*DriverInit;
	void	*DriverStartIo;
	void	*DriverUnload;
	struct long	*MajorFunction[28];
}__attribute__((packed));
