
struct _STRING {
	uint16_t	Length;
	uint16_t	MaximumLength;
	struct Char	*Buffer;
}__attribute__((packed));
