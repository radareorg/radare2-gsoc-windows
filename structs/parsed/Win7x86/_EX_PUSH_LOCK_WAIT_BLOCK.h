
struct _EX_PUSH_LOCK_WAIT_BLOCK {
	struct _KEVENT	WakeEvent;
	struct _EX_PUSH_LOCK_WAIT_BLOCKstruct Ptr32	Next;
	struct _EX_PUSH_LOCK_WAIT_BLOCKstruct Ptr32	Last;
	struct _EX_PUSH_LOCK_WAIT_BLOCKstruct Ptr32	Previous;
	int32_t	ShareCount;
	int32_t	Flags;
}__attribute__((packed));
