
struct _SECURITY_DESCRIPTOR {
	uint8_t	Revision;
	uint8_t	Sbz1;
	uint16_t	Control;
	voidstruct Ptr32	Owner;
	voidstruct Ptr32	Group;
	struct _ACLstruct Ptr32	Sacl;
	struct _ACLstruct Ptr32	Dacl;
}__attribute__((packed));
