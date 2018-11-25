
struct _IO_TIMER {
	int16_t	Type;
	int16_t	TimerFlag;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _LIST_ENTRY	TimerList;
	void	*TimerRoutine;
	void	*Context;
	struct _DEVICE_OBJECT	*DeviceObject;
}__attribute__((packed));
