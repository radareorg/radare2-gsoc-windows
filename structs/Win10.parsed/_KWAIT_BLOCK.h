
struct _KWAIT_BLOCK {
	struct _LIST_ENTRY	WaitListEntry;
	uint8_t	WaitType;
	uint8_t	BlockState;
	uint16_t	WaitKey;
	int32_t	SpareLong;
	union {
		struct _KTHREAD	*Thread;
		struct _KQUEUE	*NotificationQueue;
	};
	void	*Object;
	void	*SparePtr;
}__attribute__((packed));
