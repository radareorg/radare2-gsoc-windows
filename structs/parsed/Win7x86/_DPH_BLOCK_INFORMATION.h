
struct _DPH_BLOCK_INFORMATION {
	uint32_t	StartStamp;
	voidstruct Ptr32	Heap;
	uint32_t	RequestedSize;
	uint32_t	ActualSize;
	union {
		struct _LIST_ENTRY	FreeQueue;
		struct _SINGLE_LIST_ENTRY	FreePushList;
		uint16_t	TraceIndex;
	};
	voidstruct Ptr32	StackTrace;
	uint32_t	EndStamp;
}__attribute__((packed));
