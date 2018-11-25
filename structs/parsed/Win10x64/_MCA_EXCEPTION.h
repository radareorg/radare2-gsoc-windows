
struct _MCA_EXCEPTION {
	uint32_t	VersionNumber;
	struct MCA_EXCEPTION_TYPE	ExceptionType;
	struct _LARGE_INTEGER	TimeStamp;
	uint32_t	ProcessorNumber;
	uint32_t	Reserved1;
	struct <unnamed-tag>	u;
	uint32_t	ExtCnt;
	uint32_t	Reserved3;
	uint64_t	ExtReg[24];
}__attribute__((packed));
