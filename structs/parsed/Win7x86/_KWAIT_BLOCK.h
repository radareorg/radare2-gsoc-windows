
struct _KWAIT_BLOCK {
	struct _LIST_ENTRY	WaitListEntry;
	struct _KTHREAD	*Thread;
	void	*Object;
	struct _KWAIT_BLOCK	*NextWaitBlock;
	uint16_t	WaitKey;
	uint8_t	WaitType;
	uint8_t	BlockState;
}__attribute__((packed));
