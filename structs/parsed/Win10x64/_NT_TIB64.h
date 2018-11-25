
struct _NT_TIB64 {
	uint64_t	ExceptionList;
	uint64_t	StackBase;
	uint64_t	StackLimit;
	uint64_t	SubSystemTib;
	union {
		uint64_t	FiberData;
		uint32_t	Version;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	};
	uint64_t	ArbitraryUserPointer;
	uint64_t	Self;
}__attribute__((packed));
