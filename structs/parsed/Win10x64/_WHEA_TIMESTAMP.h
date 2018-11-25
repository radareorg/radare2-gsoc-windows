
/* AsLARGE_INTEGER */
#define	Seconds	0x000000FF
#define	Minutes	0x0000FF00
#define	Hours	0x00FF0000
#define	Precise	0x01000000
#define	Reserved	0xFE000000
#define	Day	0xFF00000000
#define	Month	0xFF0000000000
#define	Year	0xFF000000000000
#define	Century	0xFF00000000000000

struct _WHEA_TIMESTAMP {
	struct _LARGE_INTEGER	AsLARGE_INTEGER;
}__attribute__((packed));
