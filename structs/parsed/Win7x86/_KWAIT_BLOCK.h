
struct _KWAIT_BLOCK {
	struct _LIST_ENTRY	WaitListEntry;
	struct _KTHREADstruct Ptr32	Thread;
	voidstruct Ptr32	Object;
	struct _KWAIT_BLOCKstruct Ptr32	NextWaitBlock;
	uint16_t	WaitKey;
	uint8_t	WaitType;
	uint8_t	BlockState;
}__attribute__((packed));
