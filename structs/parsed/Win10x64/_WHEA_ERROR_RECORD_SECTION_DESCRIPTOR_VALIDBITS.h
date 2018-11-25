
/* AsUCHAR */
#define	FRUId	0x00000001
#define	FRUText	0x00000002
#define	Reserved	0x000000FC

struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS {
	uint8_t	AsUCHAR;
}__attribute__((packed));
