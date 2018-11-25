
struct _PPM_IDLE_STATE {
	struct _KAFFINITY_EX	DomainMembers;
	struct long	*IdleCheck;
	void	*IdleHandler;
	void	*Context;
	uint32_t	Latency;
	uint32_t	Power;
	uint32_t	TimeCheck;
	uint32_t	StateFlags;
	uint8_t	PromotePercent;
	uint8_t	DemotePercent;
	uint8_t	PromotePercentBase;
	uint8_t	DemotePercentBase;
	uint8_t	StateType;
}__attribute__((packed));
