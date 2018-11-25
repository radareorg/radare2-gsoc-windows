
struct _KDPC {
	uint8_t	Type;
	uint8_t	Importance;
	uint16_t	Number;
	struct _LIST_ENTRY	DpcListEntry;
	voidstruct Ptr32	DeferredRoutine;
	voidstruct Ptr32	DeferredContext;
	voidstruct Ptr32	SystemArgument1;
	voidstruct Ptr32	SystemArgument2;
	voidstruct Ptr32	DpcData;
}__attribute__((packed));
