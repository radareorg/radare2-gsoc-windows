
/* Depth */
#define	Hint	0x00007FFF
#define	Lock	0x00008000

struct _INTERLOCK_SEQ {
	uint16_t	Depth;
	uint16_t	Hint16;
	int32_t	Exchg;
}__attribute__((packed));
