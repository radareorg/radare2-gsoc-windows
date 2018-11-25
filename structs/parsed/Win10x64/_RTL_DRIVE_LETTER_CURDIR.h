
struct _RTL_DRIVE_LETTER_CURDIR {
	uint16_t	Flags;
	uint16_t	Length;
	uint32_t	TimeStamp;
	struct _STRING	DosPath;
}__attribute__((packed));
