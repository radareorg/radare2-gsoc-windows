
struct _NT_TIB32 {
	uint32_t	ExceptionList;
	uint32_t	StackBase;
	uint32_t	StackLimit;
	uint32_t	SubSystemTib;
	union {
		uint32_t	FiberData;
		uint32_t	Version;
	};
	uint32_t	ArbitraryUserPointer;
	uint32_t	Self;
}__attribute__((packed));
