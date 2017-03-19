
struct _CM_PARTIAL_RESOURCE_LIST {
	uint16_t	Version;
	uint16_t	Revision;
	uint32_t	Count;
	struct _CM_PARTIAL_RESOURCE_DESCRIPTOR	PartialDescriptors[1];
}__attribute__((packed));
