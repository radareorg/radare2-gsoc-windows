
struct _KAPC {
	uint8_t	Type;
	uint8_t	SpareByte0;
	uint8_t	Size;
	uint8_t	SpareByte1;
	uint32_t	SpareLong0;
	struct _KTHREADstruct Ptr32	Thread;
	struct _LIST_ENTRY	ApcListEntry;
	voidstruct Ptr32	KernelRoutine;
	voidstruct Ptr32	RundownRoutine;
	voidstruct Ptr32	NormalRoutine;
	voidstruct Ptr32	NormalContext;
	voidstruct Ptr32	SystemArgument1;
	voidstruct Ptr32	SystemArgument2;
	struct Char	ApcStateIndex;
	struct Char	ApcMode;
	uint8_t	Inserted;
}__attribute__((packed));
