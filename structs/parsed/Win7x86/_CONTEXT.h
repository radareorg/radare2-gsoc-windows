
struct _CONTEXT {
	uint32_t	ContextFlags;
	uint32_t	Dr0;
	uint32_t	Dr1;
	uint32_t	Dr2;
	uint32_t	Dr3;
	uint32_t	Dr6;
	uint32_t	Dr7;
	struct _FLOATING_SAVE_AREA	FloatSave;
	uint32_t	SegGs;
	uint32_t	SegFs;
	uint32_t	SegEs;
	uint32_t	SegDs;
	uint32_t	Edi;
	uint32_t	Esi;
	uint32_t	Ebx;
	uint32_t	Edx;
	uint32_t	Ecx;
	uint32_t	Eax;
	uint32_t	Ebp;
	uint32_t	Eip;
	uint32_t	SegCs;
	uint32_t	EFlags;
	uint32_t	Esp;
	uint32_t	SegSs;
	uint8_t	ExtendedRegisters[512];
}__attribute__((packed));
