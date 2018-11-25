
struct _POWER_STATE {
	union {
		struct _SYSTEM_POWER_STATE	SystemState;
		struct _DEVICE_POWER_STATE	DeviceState;
	};
}__attribute__((packed));
