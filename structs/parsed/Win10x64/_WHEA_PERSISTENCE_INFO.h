
/* AsULONGLONG */
#define	Signature	0x0000FFFF
#define	Length	0xFFFFFF0000
#define	Identifier	0xFFFF0000000000
#define	Attributes	0x300000000000000
#define	DoNotLog	0x400000000000000
#define	Reserved	0xF800000000000000

struct _WHEA_PERSISTENCE_INFO {
	uint64_t	AsULONGLONG;
}__attribute__((packed));
