
/* AsULONG */
#define	Recovered	0x00000001
#define	PreviousError	0x00000002
#define	Simulated	0x00000004
#define	Reserved	0xFFFFFFF8

struct _WHEA_ERROR_RECORD_HEADER_FLAGS {
	uint32_t	AsULONG;
}__attribute__((packed));
