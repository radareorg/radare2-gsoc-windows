
/* Available */
#define	WorkingSetType	0x00000007
#define	ModwriterAttached	0x00000008
#define	TrimHard	0x00000010
#define	MaximumWorkingSetHard	0x00000020
#define	ForceTrim	0x00000040
#define	MinimumWorkingSetHard	0x00000080

/* MinimumWorkingSetHard */
#define	SessionMaster	0x00000001
#define	TrimmerState	0x00000006
#define	Reserved	0x00000008
#define	PageStealers	0x000000F0

/* PageStealers */
#define	MemoryPriority	0x000000FF

/* MemoryPriority */
#define	WsleDeleted	0x00000001
#define	VmExiting	0x00000002
#define	ExpansionFailed	0x00000004
#define	Available	0x000000F8

struct _MMSUPPORT_FLAGS {
}__attribute__((packed));
