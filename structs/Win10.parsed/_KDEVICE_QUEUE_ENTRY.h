
struct _KDEVICE_QUEUE_ENTRY {
	struct _LIST_ENTRY	DeviceListEntry;
	uint32_t	SortKey;
	uint8_t	Inserted;
}__attribute__((packed));
