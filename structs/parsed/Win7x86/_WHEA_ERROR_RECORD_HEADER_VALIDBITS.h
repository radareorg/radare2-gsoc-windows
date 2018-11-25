
/* AsULONG */
#define	PlatformId	0x00000001
#define	Timestamp	0x00000002
#define	PartitionId	0x00000004
#define	Reserved	0xFFFFFFF8

struct _WHEA_ERROR_RECORD_HEADER_VALIDBITS {
	uint32_t	AsULONG;
}__attribute__((packed));
