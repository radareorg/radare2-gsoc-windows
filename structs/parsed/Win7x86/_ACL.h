
struct _ACL {
	uint8_t	AclRevision;
	uint8_t	Sbz1;
	uint16_t	AclSize;
	uint16_t	AceCount;
	uint16_t	Sbz2;
}__attribute__((packed));
