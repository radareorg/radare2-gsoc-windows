
struct _IO_RESOURCE_LIST {
	uint16_t	Version;
	uint16_t	Revision;
	uint32_t	Count;
	struct _IO_RESOURCE_DESCRIPTOR	Descriptors[1];
}__attribute__((packed));
