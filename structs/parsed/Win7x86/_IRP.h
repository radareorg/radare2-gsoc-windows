
struct _IRP {
	int16_t	Type;
	uint16_t	Size;
	struct _MDLstruct Ptr32	MdlAddress;
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
	struct _IO_STATUS_BLOCKstruct Ptr32	UserIosb;
	struct _KEVENTstruct Ptr32	UserEvent;
	struct <unnamed-tag>	Overlay;
	voidstruct Ptr32	CancelRoutine;
	voidstruct Ptr32	UserBuffer;
	struct <unnamed-tag>	Tail;
}__attribute__((packed));
