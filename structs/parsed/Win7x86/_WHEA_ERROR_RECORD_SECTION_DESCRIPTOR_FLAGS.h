
/* AsULONG */
#define	Primary	0x00000001
#define	ContainmentWarning	0x00000002
#define	Reset	0x00000004
#define	ThresholdExceeded	0x00000008
#define	ResourceNotAvailable	0x00000010
#define	LatentError	0x00000020
#define	Reserved	0xFFFFFFC0

struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS {
	uint32_t	AsULONG;
}__attribute__((packed));
