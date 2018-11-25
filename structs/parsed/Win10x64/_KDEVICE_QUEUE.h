
/* Busy */
#define	Reserved	0x000000FF
#define	Hint	0xFFFFFFFFFFFFFF00

struct _KDEVICE_QUEUE {
	int16_t	Type;
	int16_t	Size;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _LIST_ENTRY	DeviceListHead;
	uint64_t	Lock;
	uint8_t	Busy;
}__attribute__((packed));
