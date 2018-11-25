
struct _IRP {
	int16_t	Type;
	uint16_t	Size;
	struct _MDL	*MdlAddress;
	uint32_t	Flags;
	struct <unnamed-tag>	AssociatedIrp;
	struct _LIST_ENTRY	ThreadListEntry;
	struct _IO_STATUS_BLOCK	IoStatus;
	struct Char	RequestorMode;
	uint8_t	PendingReturned;
	struct Char	StackCount;
	struct Char	CurrentLocation;
	uint8_t	Cancel;
	uint8_t	CancelIrql;
	struct Char	ApcEnvironment;
	uint8_t	AllocationFlags;
	struct _IO_STATUS_BLOCK	*UserIosb;
	struct _KEVENT	*UserEvent;
	struct <unnamed-tag>	Overlay;
	void	*CancelRoutine;
	void	*UserBuffer;
	struct <unnamed-tag>	Tail;
}__attribute__((packed));
