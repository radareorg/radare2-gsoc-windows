
/* TimerControlFlags */
#define	Absolute	0x00000001
#define	Wake	0x00000002
#define	EncodedTolerableDelay	0x000000FC

/* TimerMiscFlags */
#define	Index	0x0000003F
#define	Inserted	0x00000040
#define	Expired	0x00000080

/* Timer2Flags */
#define	Timer2Inserted	0x00000001
#define	Timer2Expiring	0x00000002
#define	Timer2CancelPending	0x00000004
#define	Timer2SetPending	0x00000008
#define	Timer2Running	0x00000010
#define	Timer2Disabled	0x00000020
#define	Timer2ReservedFlags	0x000000C0
#define	Abandoned	0x00000001
#define	DisableIncrement	0x00000002
#define	QueueReservedControlFlags	0x000000FC

/* ThreadControlFlags */
#define	CycleProfiling	0x00000001
#define	CounterProfiling	0x00000002
#define	GroupScheduling	0x00000004
#define	AffinitySet	0x00000008
#define	Tagged	0x00000010
#define	EnergyProfiling	0x00000020
#define	ThreadReservedControlFlags	0x000000C0

/* DebugActive */
#define	ActiveDR7	0x00000001
#define	Instrumented	0x00000002
#define	Minimal	0x00000004
#define	Reserved4	0x00000038
#define	UmsScheduled	0x00000040
#define	UmsPrimary	0x00000080

struct _DISPATCHER_HEADER {
	union {
		int32_t	Lock;
		int32_t	LockNV;
		uint8_t	Type;
	};
	uint8_t	Signalling;
	uint8_t	Size;
	uint8_t	Reserved1;
	uint8_t	TimerType;
	uint8_t	TimerControlFlags;
	uint8_t	Hand;
	uint8_t	TimerMiscFlags;
	uint8_t	Timer2Type;
	uint8_t	Timer2Flags;
	uint8_t	Timer2Reserved1;
	uint8_t	Timer2Reserved2;
	uint8_t	QueueType;
	uint8_t	QueueControlFlags;
	uint8_t	QueueSize;
	uint8_t	QueueReserved;
	uint8_t	ThreadType;
	uint8_t	ThreadReserved;
	uint8_t	ThreadControlFlags;
	uint8_t	DebugActive;
	uint8_t	MutantType;
	uint8_t	MutantSize;
	uint8_t	DpcActive;
	uint8_t	MutantReserved;
	int32_t	SignalState;
	struct _LIST_ENTRY	WaitListHead;
}__attribute__((packed));
