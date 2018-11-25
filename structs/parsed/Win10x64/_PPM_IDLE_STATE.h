
struct _PPM_IDLE_STATE {
	struct _KAFFINITY_EX	DomainMembers;
	struct _UNICODE_STRING	Name;
	uint32_t	Latency;
	uint32_t	BreakEvenDuration;
	uint32_t	Power;
	uint32_t	StateFlags;
	struct _PPM_VETO_ACCOUNTING	VetoAccounting;
	uint8_t	StateType;
	uint8_t	InterruptsEnabled;
	uint8_t	Interruptible;
	uint8_t	ContextRetained;
	uint8_t	CacheCoherent;
	uint8_t	WakesSpuriously;
	uint8_t	PlatformOnly;
	uint8_t	NoCState;
}__attribute__((packed));
