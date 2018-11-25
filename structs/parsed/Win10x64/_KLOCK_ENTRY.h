
/* ThreadLocalFlags */
#define	WaitingBit	0x00000001
#define	Spare0	0x000000FE

/* AcquiredByte */
#define	AcquiredBit	0x00000001

/* CrossThreadFlags */
#define	HeadNodeBit	0x00000001
#define	IoPriorityBit	0x00000002
#define	IoQoSWaiter	0x00000004
#define	Spare1	0x000000F8

/* Spare1 */
#define	StaticState	0x000000FF
#define	AllFlags	0xFFFFFF00

/* EntryLock */
#define	AllBoosts	0x0001FFFF
#define	CpuBoostsBitmap	0x00007FFF
#define	IoBoost	0x00008000

/* IoBoost */
#define	IoQoSBoost	0x00000001
#define	IoNormalPriorityWaiterCount	0x000001FE
#define	IoQoSWaiterCount	0x0000FE00

struct _KLOCK_ENTRY {
	union {
		struct _RTL_BALANCED_NODE	TreeNode;
		struct _SINGLE_LIST_ENTRY	FreeListEntry;
	};
	union {
		uint32_t	EntryFlags;
		uint8_t	EntryOffset;
	};
	uint8_t	ThreadLocalFlags;
	uint8_t	AcquiredByte;
	uint8_t	CrossThreadFlags;
	uint32_t	SpareFlags;
	union {
		struct _KLOCK_ENTRY_LOCK_STATE	LockState;
		void	*LockUnsafe;
		uint8_t	CrossThreadReleasableAndBusyByte;
	};
	uint8_t	Reserved[6];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	InTreeByte;
	union {
		void	*SessionState;
		uint32_t	SessionId;
	};
	uint32_t	SessionPad;
	struct _RTL_RB_TREE	OwnerTree;
	struct _RTL_RB_TREE	WaiterTree;
	struct Char	CpuPriorityKey;
	uint64_t	EntryLock;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint32_t	SparePad;
}__attribute__((packed));
