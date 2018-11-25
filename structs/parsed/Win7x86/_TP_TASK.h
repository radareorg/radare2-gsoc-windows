
struct _TP_TASK {
	struct _TP_TASK_CALLBACKS	*Callbacks;
	uint32_t	NumaNode;
	uint8_t	IdealProcessor;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	struct _LIST_ENTRY	ListEntry;
}__attribute__((packed));
