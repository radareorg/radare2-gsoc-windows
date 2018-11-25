
struct _KINTERRUPT {
	int16_t	Type;
	int16_t	Size;
	struct _LIST_ENTRY	InterruptListEntry;
	struct charstruct unsignedstruct Ptr32	ServiceRoutine;
	struct charstruct unsignedstruct Ptr32	MessageServiceRoutine;
	uint32_t	MessageIndex;
	voidstruct Ptr32	ServiceContext;
	uint32_t	SpinLock;
	uint32_t	TickCount;
	uint32_tstruct Ptr32	ActualLock;
	voidstruct Ptr32	DispatchAddress;
	uint32_t	Vector;
	uint8_t	Irql;
	uint8_t	SynchronizeIrql;
	uint8_t	FloatingSave;
	uint8_t	Connected;
	uint32_t	Number;
	uint8_t	ShareVector;
	struct Char	Pad[3];
	struct _KINTERRUPT_MODE	Mode;
	struct _KINTERRUPT_POLARITY	Polarity;
	uint32_t	ServiceCount;
	uint32_t	DispatchCount;
	uint64_t	Rsvd1;
}__attribute__((packed));
