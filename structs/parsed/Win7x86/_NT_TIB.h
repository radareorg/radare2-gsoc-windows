
struct _NT_TIB {
	struct _EXCEPTION_REGISTRATION_RECORDstruct Ptr32	ExceptionList;
	voidstruct Ptr32	StackBase;
	voidstruct Ptr32	StackLimit;
	voidstruct Ptr32	SubSystemTib;
	union {
		voidstruct Ptr32	FiberData;
		uint32_t	Version;
	};
	voidstruct Ptr32	ArbitraryUserPointer;
	struct _NT_TIBstruct Ptr32	Self;
}__attribute__((packed));
