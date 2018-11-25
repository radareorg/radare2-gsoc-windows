
struct _STRING64 {
	uint16_t	Length;
	uint16_t	MaximumLength;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint64_t	Buffer;
}__attribute__((packed));
