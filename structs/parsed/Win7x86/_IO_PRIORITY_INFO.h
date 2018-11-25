
struct _IO_PRIORITY_INFO {
	uint32_t	Size;
	uint32_t	ThreadPriority;
	uint32_t	PagePriority;
	struct _IO_PRIORITY_HINT	IoPriority;
}__attribute__((packed));
