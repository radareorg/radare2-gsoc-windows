
struct _PPM_VETO_ENTRY {
	struct _LIST_ENTRY	Link;
	uint32_t	VetoReason;
	uint32_t	ReferenceCount;
	uint64_t	HitCount;
	uint64_t	LastActivationTime;
	uint64_t	TotalActiveTime;
	uint64_t	CsActivationTime;
	uint64_t	CsActiveTime;
}__attribute__((packed));
