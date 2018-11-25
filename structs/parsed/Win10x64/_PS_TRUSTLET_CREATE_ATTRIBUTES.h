
struct _PS_TRUSTLET_CREATE_ATTRIBUTES {
	uint64_t	TrustletIdentity;
	struct _PS_TRUSTLET_ATTRIBUTE_DATA	Attributes[1];
}__attribute__((packed));
