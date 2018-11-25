
struct _CM_FULL_RESOURCE_DESCRIPTOR {
	struct _INTERFACE_TYPE	InterfaceType;
	uint32_t	BusNumber;
	struct _CM_PARTIAL_RESOURCE_LIST	PartialResourceList;
}__attribute__((packed));
