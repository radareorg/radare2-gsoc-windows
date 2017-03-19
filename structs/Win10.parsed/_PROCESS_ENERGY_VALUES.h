
/* MBBTxRxBytes */
#define	Foreground	0x00000001
#define	DesktopVisible	0x00000002

struct _PROCESS_ENERGY_VALUES {
	uint64_t	Cycles[2][4];
	uint64_t	DiskEnergy;
	uint64_t	NetworkTailEnergy;
	uint64_t	MBBTailEnergy;
	uint64_t	NetworkTxRxBytes;
	uint64_t	MBBTxRxBytes;
	uint16_t	WindowInformation;
	uint16_t	CompositorRendered;
	uint16_t	DirtyGenerated;
	uint16_t	DirtyPropagated;
	int64_t	DesktopVisibilityReportTimestamp;
	uint64_t	DesktopVisibleTime;
	int64_t	ForegroundReportTimestamp;
	uint64_t	ForegroundTime;
}__attribute__((packed));