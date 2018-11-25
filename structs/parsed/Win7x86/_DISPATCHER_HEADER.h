
/* TimerControlFlags */
#define	Absolute	0x00000001
#define	Coalescable	0x00000002
#define	KeepShifting	0x00000004
#define	EncodedTolerableDelay	0x000000F8

/* ThreadControlFlags */
#define	CpuThrottled	0x00000001
#define	CycleProfiling	0x00000002
#define	CounterProfiling	0x00000004
#define	Reserved	0x000000F8

/* TimerMiscFlags */
#define	Index	0x00000001
#define	Processor	0x0000003E
#define	Inserted	0x00000040
#define	Expired	0x00000080
#define	ActiveDR7	0x00000001
#define	Instrumented	0x00000002
#define	Reserved2	0x0000003C
#define	UmsScheduled	0x00000040
#define	UmsPrimary	0x00000080

struct _DISPATCHER_HEADER {
	uint8_t	Type;
	union {
		uint8_t	TimerControlFlags;
		uint8_t	Abandoned;
		uint8_t	Signalling;
	};
	union {
		uint8_t	ThreadControlFlags;
		uint8_t	Hand;
		uint8_t	Size;
	};
	union {
		uint8_t	TimerMiscFlags;
		uint8_t	DebugActive;
		uint8_t	DpcActive;
	};
	int32_t	Lock;
	int32_t	SignalState;
	struct _LIST_ENTRY	WaitListHead;
}__attribute__((packed));
