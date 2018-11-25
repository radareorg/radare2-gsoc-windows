
struct _INVERTED_FUNCTION_TABLE {
	uint32_t	CurrentSize;
	uint32_t	MaximumSize;
	uint32_t	Epoch;
	uint8_t	Overflow;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	struct _INVERTED_FUNCTION_TABLE_ENTRY	TableEntry[512];
}__attribute__((packed));
