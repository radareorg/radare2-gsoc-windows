
struct _KSCHEDULING_GROUP {
	struct _KSCHEDULING_GROUP_POLICY	Policy;
	uint32_t	RelativeWeight;
	uint32_t	ChildMinRate;
	uint32_t	ChildMinWeight;
	uint32_t	ChildTotalWeight;
	uint64_t	QueryHistoryTimeStamp;
	int64_t	NotificationCycles;
	int64_t	MaxQuotaLimitCycles;
	int64_t	MaxQuotaCyclesRemaining;
	union {
		struct _LIST_ENTRY	SchedulingGroupList;
		struct _LIST_ENTRY	Sibling;
	};
	struct _KDPC	*NotificationDpc;
	struct _LIST_ENTRY	ChildList;
	struct _KSCHEDULING_GROUP	*Parent;
	struct _KSCB	PerProcessor[1];
}__attribute__((packed));
