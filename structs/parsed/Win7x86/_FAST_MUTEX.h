
struct _FAST_MUTEX {
	int32_t	Count;
	struct _KTHREAD	*Owner;
	uint32_t	Contention;
	struct _KEVENT	Event;
	uint32_t	OldIrql;
}__attribute__((packed));
