
struct _RTL_BITMAP {
	uint32_t	SizeOfBitMap;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint32_t	*Buffer;
}__attribute__((packed));
