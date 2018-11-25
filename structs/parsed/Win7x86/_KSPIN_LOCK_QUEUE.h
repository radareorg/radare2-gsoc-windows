
struct _KSPIN_LOCK_QUEUE {
	struct _KSPIN_LOCK_QUEUE	*Next;
	uint32_t	*Lock;
}__attribute__((packed));
