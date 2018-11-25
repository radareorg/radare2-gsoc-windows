
struct _DPH_BLOCK_INFORMATION {
	uint32_t	StartStamp;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	void	*Heap;
	uint64_t	RequestedSize;
	uint64_t	ActualSize;
	union {
		struct _LIST_ENTRY	FreeQueue;
		struct _SLIST_ENTRY	FreePushList;
		uint16_t	TraceIndex;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	};
	void	*StackTrace;
	uint32_t	Padding;
	uint32_t	EndStamp;
}__attribute__((packed));
