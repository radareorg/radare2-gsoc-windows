
struct _FAST_MUTEX {
	int32_t	Count;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	void	*Owner;
	uint32_t	Contention;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _KEVENT	Event;
	uint32_t	OldIrql;
}__attribute__((packed));
