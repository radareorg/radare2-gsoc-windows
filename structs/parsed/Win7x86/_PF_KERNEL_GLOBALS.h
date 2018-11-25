
struct _PF_KERNEL_GLOBALS {
	uint64_t	AccessBufferAgeThreshold;
	struct _EX_RUNDOWN_REF	AccessBufferRef;
	struct _KEVENT	AccessBufferExistsEvent;
	uint32_t	AccessBufferMax;
	struct _SLIST_HEADER	AccessBufferList;
	int32_t	StreamSequenceNumber;
	uint32_t	Flags;
	int32_t	ScenarioPrefetchCount;
}__attribute__((packed));
