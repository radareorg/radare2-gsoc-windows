
struct _VPB {
	int16_t	Type;
	int16_t	Size;
	uint16_t	Flags;
	uint16_t	VolumeLabelLength;
	struct _DEVICE_OBJECT	*DeviceObject;
	struct _DEVICE_OBJECT	*RealDevice;
	uint32_t	SerialNumber;
	uint32_t	ReferenceCount;
	struct Wchar	VolumeLabel[32];
}__attribute__((packed));
