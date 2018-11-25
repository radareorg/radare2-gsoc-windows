
/* ContextAsUlong */
#define	Reserved1	0x000000FF
#define	TargetSystemState	0x00000F00
#define	EffectiveSystemState	0x0000F000
#define	CurrentSystemState	0x000F0000
#define	IgnoreHibernationPath	0x00100000
#define	PseudoTransition	0x00200000
#define	Reserved2	0xFFC00000

struct _SYSTEM_POWER_STATE_CONTEXT {
	uint32_t	ContextAsUlong;
}__attribute__((packed));
