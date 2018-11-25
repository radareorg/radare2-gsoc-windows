
struct _KSEMAPHORE {
	struct _DISPATCHER_HEADER	Header;
	int32_t	Limit;
}__attribute__((packed));
