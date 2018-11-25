
struct _KDPC {
	uint8_t	Type;
	uint8_t	Importance;
	uint16_t	Number;
	struct _LIST_ENTRY	DpcListEntry;
	void	*DeferredRoutine;
	void	*DeferredContext;
	void	*SystemArgument1;
	void	*SystemArgument2;
	void	*DpcData;
}__attribute__((packed));
