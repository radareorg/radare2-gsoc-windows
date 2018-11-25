
struct _PROC_PERF_HISTORY_ENTRY {
	uint16_t	Utility;
	uint16_t	AffinitizedUtility;
	uint8_t	Frequency;
	uint8_t	TaggedPercent[2];
}__attribute__((packed));
