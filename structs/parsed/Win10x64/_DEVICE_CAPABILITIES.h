
/* Version */
#define	DeviceD1	0x00000001
#define	DeviceD2	0x00000002
#define	LockSupported	0x00000004
#define	EjectSupported	0x00000008
#define	Removable	0x00000010
#define	DockDevice	0x00000020
#define	UniqueID	0x00000040
#define	SilentInstall	0x00000080
#define	RawDeviceOK	0x00000100
#define	SurpriseRemovalOK	0x00000200
#define	WakeFromD0	0x00000400
#define	WakeFromD1	0x00000800
#define	WakeFromD2	0x00001000
#define	WakeFromD3	0x00002000
#define	HardwareDisabled	0x00004000
#define	NonDynamic	0x00008000
#define	WarmEjectSupported	0x00010000
#define	NoDisplayInUI	0x00020000
#define	Reserved1	0x00040000
#define	WakeFromInterrupt	0x00080000
#define	Reserved	0xFFF00000

struct _DEVICE_CAPABILITIES {
	uint16_t	Size;
	uint16_t	Version;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint32_t	Address;
	uint32_t	UINumber;
	struct _DEVICE_POWER_STATE	DeviceState[7];
	struct _SYSTEM_POWER_STATE	SystemWake;
	struct _DEVICE_POWER_STATE	DeviceWake;
	uint32_t	D1Latency;
	uint32_t	D2Latency;
	uint32_t	D3Latency;
}__attribute__((packed));
