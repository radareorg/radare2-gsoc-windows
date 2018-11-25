
struct _STRING {
	uint16_t	Length;
	uint16_t	MaximumLength;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct Char	*Buffer;
}__attribute__((packed));
