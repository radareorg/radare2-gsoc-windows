
struct _EVENT_HEADER {
	uint16_t	Size;
	uint16_t	HeaderType;
	uint16_t	Flags;
	uint16_t	EventProperty;
	uint32_t	ThreadId;
	uint32_t	ProcessId;
	struct _LARGE_INTEGER	TimeStamp;
	struct _GUID	ProviderId;
	struct _EVENT_DESCRIPTOR	EventDescriptor;
	uint32_t	KernelTime;
	uint32_t	UserTime;
	uint64_t	ProcessorTime;
	struct _GUID	ActivityId;
}__attribute__((packed));
