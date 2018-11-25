
/* QueueNode */
#define	Inserted	0x00000001
#define	MaxOverQuota	0x00000002
#define	MinOverQuota	0x00000004
#define	RankBias	0x00000008
#define	SoftCap	0x00000010
#define	ShareRankOwner	0x00000020
#define	Spare1	0x000000C0

struct _KSCB {
	uint64_t	GenerationCycles;
	uint64_t	MinQuotaCycleTarget;
	uint64_t	MaxQuotaCycleTarget;
	uint64_t	RankCycleTarget;
	uint64_t	LongTermCycles;
	uint64_t	LastReportedCycles;
	uint64_t	OverQuotaHistory;
	uint64_t	ReadyTime;
	uint64_t	InsertTime;
	struct _LIST_ENTRY	PerProcessorList;
	struct _RTL_BALANCED_NODE	QueueNode;
	uint8_t	Depth;
	uint16_t	ReadySummary;
	uint32_t	Rank;
	uint32_t	*ShareRank;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint32_t	OwnerShareRank;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _LIST_ENTRY	ReadyListHead[16];
	struct _RTL_RB_TREE	ChildScbQueue;
	struct _KSCB	*Parent;
	struct _KSCB	*Root;
}__attribute__((packed));
