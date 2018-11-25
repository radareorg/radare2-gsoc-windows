
/* *UserContext */
#define	ScheduledThread	0x00000001
#define	Suspended	0x00000002
#define	VolatileContext	0x00000004
#define	Terminated	0x00000008
#define	DebugActive	0x00000010
#define	RunningOnSelfThread	0x00000020
#define	DenyRunningOnSelfThread	0x00000040

/* Flags */
#define	KernelUpdateLock	0x00000003
#define	PrimaryClientID	0xFFFFFFFFFFFFFFFC

struct _RTL_UMS_CONTEXT {
	struct _SINGLE_LIST_ENTRY	Link;
	struct _CONTEXT	Context;
	void	*Teb;
	void	*UserContext;
	int32_t	Flags;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	ContextLock;
	struct _RTL_UMS_CONTEXT	*PrimaryUmsContext;
	uint32_t	SwitchCount;
	uint32_t	KernelYieldCount;
	uint32_t	MixedYieldCount;
	uint32_t	YieldCount;
}__attribute__((packed));
