
struct _UNICODE_STRING {
	uint16_t	Length;
	uint16_t	MaximumLength;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct Wchar	*Buffer;
}__attribute__((packed));
