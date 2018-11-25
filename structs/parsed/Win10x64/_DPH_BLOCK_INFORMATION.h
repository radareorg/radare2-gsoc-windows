
struct _DPH_BLOCK_INFORMATION {
	uint32_t	StartStamp;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*Heap;
	uint64_t	RequestedSize;
	uint64_t	ActualSize;
	union {
		struct _LIST_ENTRY	FreeQueue;
		struct _SLIST_ENTRY	FreePushList;
		uint16_t	TraceIndex;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint8_t	__padding8__;
	uint8_t	__padding9__;
	uint8_t	__padding10__;
	uint8_t	__padding11__;
	uint8_t	__padding12__;
	uint8_t	__padding13__;
	};
	void	*StackTrace;
	uint32_t	Padding;
	uint32_t	EndStamp;
}__attribute__((packed));
