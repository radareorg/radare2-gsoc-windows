
struct _KDEVICE_QUEUE {
	int16_t	Type;
	int16_t	Size;
	struct _LIST_ENTRY	DeviceListHead;
	uint32_t	Lock;
	uint8_t	Busy;
}__attribute__((packed));
