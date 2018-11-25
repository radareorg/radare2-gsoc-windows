
/* *FltSave */
#define	Volatile	0x00000001
#define	Reserved	0xFFFFFFFFFFFFFFFE

struct _KUMS_CONTEXT_HEADER {
	uint64_t	P1Home;
	uint64_t	P2Home;
	uint64_t	P3Home;
	uint64_t	P4Home;
	void	*StackTop;
	uint64_t	StackSize;
	uint64_t	RspOffset;
	uint64_t	Rip;
	struct _XSAVE_FORMAT	*FltSave;
	uint64_t	Flags;
	struct _KTRAP_FRAME	*TrapFrame;
	struct _KEXCEPTION_FRAME	*ExceptionFrame;
	struct _KTHREAD	*SourceThread;
	uint64_t	Return;
}__attribute__((packed));
