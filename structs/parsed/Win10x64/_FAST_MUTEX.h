
struct _FAST_MUTEX {
	int32_t	Count;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*Owner;
	uint32_t	Contention;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _KEVENT	Event;
	uint32_t	OldIrql;
}__attribute__((packed));
