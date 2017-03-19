
struct _IO_RESOURCE_DESCRIPTOR {
	uint8_t	Option;
	uint8_t	Type;
	uint8_t	ShareDisposition;
	uint8_t	Spare1;
	uint16_t	Flags;
	uint16_t	Spare2;
	struct <unnamed-tag>	u;
}__attribute__((packed));
