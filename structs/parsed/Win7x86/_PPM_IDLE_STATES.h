
struct _PPM_IDLE_STATES {
	uint32_t	Count;
	struct <unnamed-tag>	Flags;
	uint32_t	TargetState;
	uint32_t	ActualState;
	uint32_t	OldState;
	struct _KAFFINITY_EX	TargetProcessors;
	struct _PPM_IDLE_STATE	State[1];
}__attribute__((packed));
