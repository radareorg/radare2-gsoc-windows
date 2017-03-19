
struct _KAPC {
	uint8_t	Type;
	uint8_t	SpareByte0;
	uint8_t	Size;
	uint8_t	SpareByte1;
	uint32_t	SpareLong0;
	struct _KTHREAD	*Thread;
	struct _LIST_ENTRY	ApcListEntry;
	void	*KernelRoutine;
	void	*RundownRoutine;
	void	*NormalRoutine;
	void	*Reserved[3];
	void	*NormalContext;
	void	*SystemArgument1;
	void	*SystemArgument2;
	struct Char	ApcStateIndex;
	struct Char	ApcMode;
	uint8_t	Inserted;
}__attribute__((packed));
