
struct _STRING {
	uint16_t	Length;
	uint16_t	MaximumLength;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct Char	*Buffer;
}__attribute__((packed));
