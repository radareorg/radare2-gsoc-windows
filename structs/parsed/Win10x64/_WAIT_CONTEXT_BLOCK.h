
/* NumberOfChannels */
#define	SyncCallback	0x00000001
#define	DmaContext	0x00000002
#define	ZeroMapRegisters	0x00000004
#define	Reserved	0xFFFFFFF8

struct _WAIT_CONTEXT_BLOCK {
	union {
		struct _KDEVICE_QUEUE_ENTRY	WaitQueueEntry;
		struct _LIST_ENTRY	DmaWaitEntry;
	};
	uint32_t	NumberOfChannels;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _IO_ALLOCATION_ACTION	*DeviceRoutine;
	void	*DeviceContext;
	uint32_t	NumberOfMapRegisters;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*DeviceObject;
	void	*CurrentIrp;
	struct _KDPC	*BufferChainingDpc;
}__attribute__((packed));
