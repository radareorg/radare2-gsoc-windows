
struct _PROC_PERF_HISTORY {
	uint32_t	Count;
	uint32_t	Slot;
	uint32_t	UtilityTotal;
	uint32_t	AffinitizedUtilityTotal;
	uint32_t	FrequencyTotal;
	uint32_t	TaggedPercentTotal[2];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _PROC_PERF_HISTORY_ENTRY	HistoryList[1];
}__attribute__((packed));
