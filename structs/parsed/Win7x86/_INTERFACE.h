
struct _INTERFACE {
	uint16_t	Size;
	uint16_t	Version;
	voidstruct Ptr32	Context;
	voidstruct Ptr32	InterfaceReference;
	voidstruct Ptr32	InterfaceDereference;
}__attribute__((packed));
