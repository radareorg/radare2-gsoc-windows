
struct _IO_TIMER {
	int16_t	Type;
	int16_t	TimerFlag;
	struct _LIST_ENTRY	TimerList;
	voidstruct Ptr32	TimerRoutine;
	voidstruct Ptr32	Context;
	struct _DEVICE_OBJECTstruct Ptr32	DeviceObject;
}__attribute__((packed));
