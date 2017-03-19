
struct _UNICODE_STRING {
	uint16_t	Length;
	uint16_t	MaximumLength;
	struct Wchar	*Buffer;
}__attribute__((packed));
