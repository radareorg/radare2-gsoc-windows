
struct _KTIMER {
	struct _DISPATCHER_HEADER	Header;
	struct _ULARGE_INTEGER	DueTime;
	struct _LIST_ENTRY	TimerListEntry;
	struct _KDPCstruct Ptr32	Dpc;
	uint32_t	Period;
}__attribute__((packed));
