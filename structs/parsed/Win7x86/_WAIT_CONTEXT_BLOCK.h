
struct _WAIT_CONTEXT_BLOCK {
	struct _KDEVICE_QUEUE_ENTRY	WaitQueueEntry;
	struct _IO_ALLOCATION_ACTION	*DeviceRoutine;
	void	*DeviceContext;
	uint32_t	NumberOfMapRegisters;
	void	*DeviceObject;
	void	*CurrentIrp;
	struct _KDPC	*BufferChainingDpc;
}__attribute__((packed));
