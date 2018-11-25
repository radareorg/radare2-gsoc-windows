
struct _DPH_BLOCK_INFORMATION {
	uint32_t	StartStamp;
	void	*Heap;
	uint32_t	RequestedSize;
	uint32_t	ActualSize;
	union {
		struct _LIST_ENTRY	FreeQueue;
		struct _SINGLE_LIST_ENTRY	FreePushList;
		uint16_t	TraceIndex;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	};
	void	*StackTrace;
	uint32_t	EndStamp;
}__attribute__((packed));
