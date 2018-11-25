
struct _EXCEPTION_RECORD {
	int32_t	ExceptionCode;
	uint32_t	ExceptionFlags;
	struct _EXCEPTION_RECORDstruct Ptr32	ExceptionRecord;
	voidstruct Ptr32	ExceptionAddress;
	uint32_t	NumberParameters;
	uint32_t	ExceptionInformation[15];
}__attribute__((packed));
