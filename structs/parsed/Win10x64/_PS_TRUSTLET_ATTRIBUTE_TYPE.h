
struct _PS_TRUSTLET_ATTRIBUTE_TYPE {
	uint8_t	Version;
	uint8_t	DataCount;
	uint8_t	SemanticType;
	struct _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS	AccessRights;
	uint32_t	AttributeType;
}__attribute__((packed));
