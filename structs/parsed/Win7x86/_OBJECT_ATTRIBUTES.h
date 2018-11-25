
struct _OBJECT_ATTRIBUTES {
	uint32_t	Length;
	voidstruct Ptr32	RootDirectory;
	struct _UNICODE_STRINGstruct Ptr32	ObjectName;
	uint32_t	Attributes;
	voidstruct Ptr32	SecurityDescriptor;
	voidstruct Ptr32	SecurityQualityOfService;
}__attribute__((packed));
