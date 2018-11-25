
/* *Ptr */
#define	Locked	0x00000001
#define	Waiting	0x00000002
#define	Waking	0x00000004
#define	MultipleShared	0x00000008
#define	Shared	0xFFFFFFF0

struct _RTL_SRWLOCK {
	union {
		uint32_t	Value;
		void	*Ptr;
	};
}__attribute__((packed));
