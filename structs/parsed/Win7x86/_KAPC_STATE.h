
struct _KAPC_STATE {
	struct _LIST_ENTRY	ApcListHead[2];
	struct _KPROCESS	*Process;
	uint8_t	KernelApcInProgress;
	uint8_t	KernelApcPending;
	uint8_t	UserApcPending;
}__attribute__((packed));
