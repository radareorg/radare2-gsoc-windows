
struct _KSPECIAL_REGISTERS {
	uint32_t	Cr0;
	uint32_t	Cr2;
	uint32_t	Cr3;
	uint32_t	Cr4;
	uint32_t	KernelDr0;
	uint32_t	KernelDr1;
	uint32_t	KernelDr2;
	uint32_t	KernelDr3;
	uint32_t	KernelDr6;
	uint32_t	KernelDr7;
	struct _DESCRIPTOR	Gdtr;
	struct _DESCRIPTOR	Idtr;
	uint16_t	Tr;
	uint16_t	Ldtr;
	uint32_t	Reserved[6];
}__attribute__((packed));
