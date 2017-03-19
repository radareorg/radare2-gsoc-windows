struct _DPH_BLOCK_INFORMATION {
	uint32_t	StartStamp;
	void	*Heap;
	uint64_t	RequestedSize;
	uint64_t	ActualSize;
	union {
		struct _LIST_ENTRY	FreeQueue;
		struct _SLIST_ENTRY	FreePushList;
		uint16_t	TraceIndex;
	};
	void	*StackTrace;
	uint32_t	Padding;
	uint32_t	EndStamp;
}__attribute__((packed));
