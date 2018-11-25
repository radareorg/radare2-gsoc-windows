
struct _KTIMER_TABLE {
	struct _KTIMERstruct Ptr32	TimerExpiry[16];
	struct _KTIMER_TABLE_ENTRY	TimerEntries[256];
}__attribute__((packed));
