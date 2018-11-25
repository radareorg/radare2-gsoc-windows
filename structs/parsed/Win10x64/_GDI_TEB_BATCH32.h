
/* Buffer[310] */
#define	Offset	0x7FFFFFFF
#define	HasRenderingCommand	0x80000000

struct _GDI_TEB_BATCH32 {
	uint32_t	HDC;
	uint32_t	Buffer[310];
}__attribute__((packed));
