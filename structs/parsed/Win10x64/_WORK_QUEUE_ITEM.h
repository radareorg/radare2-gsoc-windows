
struct _WORK_QUEUE_ITEM {
	struct _LIST_ENTRY	List;
	void	*WorkerRoutine;
	void	*Parameter;
}__attribute__((packed));
