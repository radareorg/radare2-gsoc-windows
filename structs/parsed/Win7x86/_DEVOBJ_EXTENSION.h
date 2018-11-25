
struct _DEVOBJ_EXTENSION {
	int16_t	Type;
	uint16_t	Size;
	struct _DEVICE_OBJECTstruct Ptr32	DeviceObject;
	uint32_t	PowerFlags;
	struct _DEVICE_OBJECT_POWER_EXTENSIONstruct Ptr32	Dope;
	uint32_t	ExtensionFlags;
	voidstruct Ptr32	DeviceNode;
	struct _DEVICE_OBJECTstruct Ptr32	AttachedTo;
	int32_t	StartIoCount;
	int32_t	StartIoKey;
	uint32_t	StartIoFlags;
	struct _VPBstruct Ptr32	Vpb;
	struct _LIST_ENTRY	DependentList;
	struct _LIST_ENTRY	ProviderList;
}__attribute__((packed));
