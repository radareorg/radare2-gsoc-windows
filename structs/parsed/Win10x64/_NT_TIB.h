
struct _NT_TIB {
	struct _EXCEPTION_REGISTRATION_RECORD	*ExceptionList;
	void	*StackBase;
	void	*StackLimit;
	void	*SubSystemTib;
	union {
		void	*FiberData;
		uint32_t	Version;
	};
	void	*ArbitraryUserPointer;
	struct _NT_TIB	*Self;
}__attribute__((packed));
