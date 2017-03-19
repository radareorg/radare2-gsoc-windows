struct _KSPECIAL_REGISTERS {
	uint64_t	Cr0;
	uint64_t	Cr2;
	uint64_t	Cr3;
	uint64_t	Cr4;
	uint64_t	KernelDr0;
	uint64_t	KernelDr1;
	uint64_t	KernelDr2;
	uint64_t	KernelDr3;
	uint64_t	KernelDr6;
	uint64_t	KernelDr7;
	struct _KDESCRIPTOR	Gdtr;
	struct _KDESCRIPTOR	Idtr;
	uint16_t	Tr;
	uint16_t	Ldtr;
	uint32_t	MxCsr;
	uint64_t	DebugControl;
	uint64_t	LastBranchToRip;
	uint64_t	LastBranchFromRip;
	uint64_t	LastExceptionToRip;
	uint64_t	LastExceptionFromRip;
	uint64_t	Cr8;
	uint64_t	MsrGsBase;
	uint64_t	MsrGsSwap;
	uint64_t	MsrStar;
	uint64_t	MsrLStar;
	uint64_t	MsrCStar;
	uint64_t	MsrSyscallMask;
	uint64_t	Xcr0;
}__attribute__((packed));
