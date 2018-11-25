
struct _RTL_BITMAP {
	uint32_t	SizeOfBitMap;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint32_t	*Buffer;
}__attribute__((packed));
