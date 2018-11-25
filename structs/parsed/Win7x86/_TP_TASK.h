
struct _TP_TASK {
	struct _TP_TASK_CALLBACKS	*Callbacks;
	uint32_t	NumaNode;
	uint8_t	IdealProcessor;
	struct _LIST_ENTRY	ListEntry;
}__attribute__((packed));
