
struct _OB_EXTENDED_PARSE_PARAMETERS {
	uint16_t	Length;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint32_t	RestrictedAccessMask;
	struct _EJOB	*Silo;
}__attribute__((packed));
