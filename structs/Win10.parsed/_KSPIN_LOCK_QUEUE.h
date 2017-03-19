
struct _KSPIN_LOCK_QUEUE {
	struct _KSPIN_LOCK_QUEUE	*Next;
	uint64_t	*Lock;
}__attribute__((packed));
