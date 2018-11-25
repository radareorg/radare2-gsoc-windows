
/* Level */
#define	Type	0x00000007
#define	Audit	0x00000008
#define	Signer	0x000000F0

struct _PS_PROTECTION {
	uint8_t	Level;
}__attribute__((packed));
