
/* SessionPad */
#define	CrossThreadReleasable	0x00000001
#define	Busy	0x00000002
#define	Reserved	0x7FFFFFFFFFFFFFFC
#define	InTree	0x8000000000000000

struct _KLOCK_ENTRY_LOCK_STATE {
	void	*LockState;
	union {
		void	*SessionState;
		uint32_t	SessionId;
	};
	uint32_t	SessionPad;
}__attribute__((packed));
