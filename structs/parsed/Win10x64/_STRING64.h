
struct _STRING64 {
	uint16_t	Length;
	uint16_t	MaximumLength;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	Buffer;
}__attribute__((packed));
