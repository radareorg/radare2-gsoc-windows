
struct _DEVICE_OBJECT {
	int16_t	Type;
	uint16_t	Size;
	int32_t	ReferenceCount;
	struct _DRIVER_OBJECTstruct Ptr32	DriverObject;
	struct _DEVICE_OBJECTstruct Ptr32	NextDevice;
	struct _DEVICE_OBJECTstruct Ptr32	AttachedDevice;
	struct _IRPstruct Ptr32	CurrentIrp;
	struct _IO_TIMERstruct Ptr32	Timer;
	uint32_t	Flags;
	uint32_t	Characteristics;
	struct _VPBstruct Ptr32	Vpb;
	voidstruct Ptr32	DeviceExtension;
	uint32_t	DeviceType;
	struct Char	StackSize;
	struct <unnamed-tag>	Queue;
	uint32_t	AlignmentRequirement;
	struct _KDEVICE_QUEUE	DeviceQueue;
	struct _KDPC	Dpc;
	uint32_t	ActiveThreadCount;
	voidstruct Ptr32	SecurityDescriptor;
	struct _KEVENT	DeviceLock;
	uint16_t	SectorSize;
	uint16_t	Spare1;
	struct _DEVOBJ_EXTENSIONstruct Ptr32	DeviceObjectExtension;
	voidstruct Ptr32	Reserved;
}__attribute__((packed));
