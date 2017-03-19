
/* AttributeType */
#define	InstanceNumber	0x000000FF
#define	Reserved	0xFFFFFF00

struct _PS_TRUSTLET_ATTRIBUTE_HEADER {
	struct _PS_TRUSTLET_ATTRIBUTE_TYPE	AttributeType;
}__attribute__((packed));
