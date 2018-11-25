
struct _EX_PUSH_LOCK_WAIT_BLOCK {
	struct _KEVENT	WakeEvent;
	struct _EX_PUSH_LOCK_WAIT_BLOCK	*Next;
	struct _EX_PUSH_LOCK_WAIT_BLOCK	*Last;
	struct _EX_PUSH_LOCK_WAIT_BLOCK	*Previous;
	int32_t	ShareCount;
	int32_t	Flags;
}__attribute__((packed));
