
/* AccessRights */
#define	Trustlet	0x00000001
#define	Ntos	0x00000002
#define	WriteHandle	0x00000004
#define	ReadHandle	0x00000008
#define	Reserved	0x000000F0

struct _PS_TRUSTLET_ATTRIBUTE_ACCESSRIGHTS {
	uint8_t	AccessRights;
}__attribute__((packed));
