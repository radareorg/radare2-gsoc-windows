
/* AllPolicies */
#define	DisableAffinity	0x00000001
#define	SlowSubsegmentGrowth	0x00000002
#define	Spare	0xFFFFFFFC

struct _HEAP_LFH_MEM_POLICIES {
	uint32_t	AllPolicies;
}__attribute__((packed));
