
/* u2 */
#define	WorkingSetType	0x00000007
#define	Reserved0	0x00000038
#define	MaximumWorkingSetHard	0x00000040
#define	MinimumWorkingSetHard	0x00000080

/* MinimumWorkingSetHard */
#define	SessionMaster	0x00000001
#define	TrimmerState	0x00000006
#define	Reserved	0x00000008
#define	PageStealers	0x000000F0

/* MemoryPriority */
#define	WsleDeleted	0x00000001
#define	VmExiting	0x00000002
#define	ExpansionFailed	0x00000004
#define	SvmEnabled	0x00000008
#define	ForceAge	0x00000010
#define	NewMaximum	0x00000020
#define	CommitReleaseState	0x000000C0

struct _MMSUPPORT_FLAGS {
	uint16_t	u1;
	uint8_t	MemoryPriority;
	uint8_t	u2;
}__attribute__((packed));
