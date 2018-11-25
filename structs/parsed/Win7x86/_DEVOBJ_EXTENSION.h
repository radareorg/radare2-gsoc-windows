
struct _DEVOBJ_EXTENSION {
	int16_t	Type;
	uint16_t	Size;
	struct _DEVICE_OBJECT	*DeviceObject;
	uint32_t	PowerFlags;
	struct _DEVICE_OBJECT_POWER_EXTENSION	*Dope;
	uint32_t	ExtensionFlags;
	void	*DeviceNode;
	struct _DEVICE_OBJECT	*AttachedTo;
	int32_t	StartIoCount;
	int32_t	StartIoKey;
	uint32_t	StartIoFlags;
	struct _VPB	*Vpb;
	struct _LIST_ENTRY	DependentList;
	struct _LIST_ENTRY	ProviderList;
}__attribute__((packed));
