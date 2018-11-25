
struct _UNICODE_STRING {
	uint16_t	Length;
	uint16_t	MaximumLength;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct Wchar	*Buffer;
}__attribute__((packed));
