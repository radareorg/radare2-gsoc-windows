
/* Selector */
#define	IstIndex	0x00000007
#define	Reserved0	0x000000F8
#define	Type	0x00001F00
#define	Dpl	0x00006000
#define	Present	0x00008000

struct _KIDTENTRY64 {
	uint16_t	OffsetLow;
	uint16_t	Selector;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint16_t	OffsetMiddle;
	uint32_t	OffsetHigh;
	uint32_t	Reserved1;
	uint64_t	Alignment;
}__attribute__((packed));
