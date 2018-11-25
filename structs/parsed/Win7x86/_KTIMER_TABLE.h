
struct _KTIMER_TABLE {
	struct _KTIMER	*TimerExpiry[16];
	struct _KTIMER_TABLE_ENTRY	TimerEntries[256];
}__attribute__((packed));
