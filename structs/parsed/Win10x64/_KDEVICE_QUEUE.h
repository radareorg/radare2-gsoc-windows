
/* Busy */
#define	Reserved	0x000000FF
#define	Hint	0xFFFFFFFFFFFFFF00

struct _KDEVICE_QUEUE {
	int16_t	Type;
	int16_t	Size;
	struct _LIST_ENTRY	DeviceListHead;
	uint64_t	Lock;
	uint8_t	Busy;
}__attribute__((packed));
