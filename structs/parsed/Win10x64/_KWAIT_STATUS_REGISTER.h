
/* Flags */
#define	State	0x00000007
#define	Affinity	0x00000008
#define	Priority	0x00000010
#define	Apc	0x00000020
#define	UserApc	0x00000040
#define	Alert	0x00000080

struct _KWAIT_STATUS_REGISTER {
	uint8_t	Flags;
}__attribute__((packed));
