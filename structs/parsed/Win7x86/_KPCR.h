
struct _KPCR {
	union {
		struct _NT_TIB	NtTib;
		struct _EXCEPTION_REGISTRATION_RECORD	*Used_ExceptionList;
	};
	void	*Used_StackBase;
	void	*Spare2;
	void	*TssCopy;
	uint32_t	ContextSwitches;
	uint32_t	SetMemberCopy;
	void	*Used_Self;
	struct _KPCR	*SelfPcr;
	struct _KPRCB	*Prcb;
	uint8_t	Irql;
	uint32_t	IRR;
	uint32_t	IrrActive;
	uint32_t	IDR;
	void	*KdVersionBlock;
	struct _KIDTENTRY	*IDT;
	struct _KGDTENTRY	*GDT;
	struct _KTSS	*TSS;
	uint16_t	MajorVersion;
	uint16_t	MinorVersion;
	uint32_t	SetMember;
	uint32_t	StallScaleFactor;
	uint8_t	SpareUnused;
	uint8_t	Number;
	uint8_t	Spare0;
	uint8_t	SecondLevelCacheAssociativity;
	uint32_t	VdmAlert;
	uint32_t	KernelReserved[14];
	uint32_t	SecondLevelCacheSize;
	uint32_t	HalReserved[16];
	uint32_t	InterruptMode;
	uint8_t	Spare1;
	uint32_t	KernelReserved2[17];
	struct _KPRCB	PrcbData;
}__attribute__((packed));
