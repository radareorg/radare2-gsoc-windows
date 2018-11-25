
struct _PROC_PERF_CHECK {
	uint64_t	LastActive;
	uint64_t	LastTime;
	uint64_t	LastStall;
	struct _PROC_PERF_CHECK_SNAP	Snap;
	struct _PROC_PERF_CHECK_SNAP	TempSnap;
	uint8_t	TaggedThreadPercent[2];
}__attribute__((packed));
