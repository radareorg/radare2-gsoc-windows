
/* AsULONG */
#define	PreviousError	0x00000001
#define	Reserved1	0x00000002
#define	HypervisorError	0x00000004
#define	Simulated	0x00000008
#define	PlatformPfaControl	0x00000010
#define	PlatformDirectedOffline	0x00000020
#define	Reserved2	0xFFFFFFC0

struct _WHEA_ERROR_PACKET_FLAGS {
	uint32_t	AsULONG;
}__attribute__((packed));
