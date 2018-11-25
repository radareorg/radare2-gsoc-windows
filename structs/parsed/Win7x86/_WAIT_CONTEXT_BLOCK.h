
struct _WAIT_CONTEXT_BLOCK {
	struct _KDEVICE_QUEUE_ENTRY	WaitQueueEntry;
	struct _IO_ALLOCATION_ACTIONstruct Ptr32	DeviceRoutine;
	voidstruct Ptr32	DeviceContext;
	uint32_t	NumberOfMapRegisters;
	voidstruct Ptr32	DeviceObject;
	voidstruct Ptr32	CurrentIrp;
	struct _KDPCstruct Ptr32	BufferChainingDpc;
}__attribute__((packed));
