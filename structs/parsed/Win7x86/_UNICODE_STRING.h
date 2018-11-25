
struct _UNICODE_STRING {
	uint16_t	Length;
	uint16_t	MaximumLength;
	uint16_t	*Buffer;
}__attribute__((packed));
