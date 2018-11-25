
struct _IO_TIMER {
	int16_t	Type;
	int16_t	TimerFlag;
	struct _LIST_ENTRY	TimerList;
	void	*TimerRoutine;
	void	*Context;
	struct _DEVICE_OBJECT	*DeviceObject;
}__attribute__((packed));
