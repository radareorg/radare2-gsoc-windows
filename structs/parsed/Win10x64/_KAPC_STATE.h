
/* InProgressFlags */
#define	KernelApcInProgress	0x00000001
#define	SpecialApcInProgress	0x00000002

struct _KAPC_STATE {
	struct _LIST_ENTRY	ApcListHead[2];
	struct _KPROCESS	*Process;
	uint8_t	InProgressFlags;
	uint8_t	KernelApcPending;
	uint8_t	UserApcPending;
}__attribute__((packed));
