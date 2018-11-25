
struct _SID {
	uint8_t	Revision;
	uint8_t	SubAuthorityCount;
	struct _SID_IDENTIFIER_AUTHORITY	IdentifierAuthority;
	uint32_t	SubAuthority[1];
}__attribute__((packed));
