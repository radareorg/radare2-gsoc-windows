/* SyncCallback */
#define	DmaContext	0x00000002
#define	ZeroMapRegisters	0x00000004
#define	Reserved	0xFFFFFFF8

struct _WAIT_CONTEXT_BLOCK {
	union {
		struct _KDEVICE_QUEUE_ENTRY	WaitQueueEntry;
		struct _LIST_ENTRY	DmaWaitEntry;
	};
	uint32_t	NumberOfChannels;
	struct Bitstruct 1struct 0,struct Pos	SyncCallback;
	struct _IO_ALLOCATION_ACTION	*DeviceRoutine;
	void	*DeviceContext;
	uint32_t	NumberOfMapRegisters;
	void	*DeviceObject;
	void	*CurrentIrp;
	struct _KDPC	*BufferChainingDpc;
}__attribute__((packed));
