
struct _KDPC {
	union {
		uint32_t	TargetInfoAsUlong;
		uint8_t	Type;
	};
	uint8_t	Importance;
	uint16_t	Number;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _SINGLE_LIST_ENTRY	DpcListEntry;
	uint64_t	ProcessorHistory;
	void	*DeferredRoutine;
	void	*DeferredContext;
	void	*SystemArgument1;
	void	*SystemArgument2;
	void	*DpcData;
}__attribute__((packed));
