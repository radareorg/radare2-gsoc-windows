
struct _NT_TIB {
	struct _EXCEPTION_REGISTRATION_RECORD	*ExceptionList;
	void	*StackBase;
	void	*StackLimit;
	void	*SubSystemTib;
	union {
		void	*FiberData;
		uint32_t	Version;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	};
	void	*ArbitraryUserPointer;
	struct _NT_TIB	*Self;
}__attribute__((packed));
