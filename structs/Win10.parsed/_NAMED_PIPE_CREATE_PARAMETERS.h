
struct _NAMED_PIPE_CREATE_PARAMETERS {
	uint32_t	NamedPipeType;
	uint32_t	ReadMode;
	uint32_t	CompletionMode;
	uint32_t	MaximumInstances;
	uint32_t	InboundQuota;
	uint32_t	OutboundQuota;
	struct _LARGE_INTEGER	DefaultTimeout;
	uint8_t	TimeoutSpecified;
}__attribute__((packed));
