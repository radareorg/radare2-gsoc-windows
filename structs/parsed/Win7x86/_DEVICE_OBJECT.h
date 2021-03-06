
struct _DEVICE_OBJECT {
	int16_t	Type;
	uint16_t	Size;
	int32_t	ReferenceCount;
	struct _DRIVER_OBJECT	*DriverObject;
	struct _DEVICE_OBJECT	*NextDevice;
	struct _DEVICE_OBJECT	*AttachedDevice;
	struct _IRP	*CurrentIrp;
	struct _IO_TIMER	*Timer;
	uint32_t	Flags;
	uint32_t	Characteristics;
	struct _VPB	*Vpb;
	void	*DeviceExtension;
	uint32_t	DeviceType;
	struct Char	StackSize;
	struct <unnamed-tag>	Queue;
	uint32_t	AlignmentRequirement;
	struct _KDEVICE_QUEUE	DeviceQueue;
	struct _KDPC	Dpc;
	uint32_t	ActiveThreadCount;
	void	*SecurityDescriptor;
	struct _KEVENT	DeviceLock;
	uint16_t	SectorSize;
	uint16_t	Spare1;
	struct _DEVOBJ_EXTENSION	*DeviceObjectExtension;
	void	*Reserved;
}__attribute__((packed));
