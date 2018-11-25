
struct _KPCR {
	union {
		struct _NT_TIB	NtTib;
		struct _EXCEPTION_REGISTRATION_RECORDstruct Ptr32	Used_ExceptionList;
	};
	voidstruct Ptr32	Used_StackBase;
	voidstruct Ptr32	Spare2;
	voidstruct Ptr32	TssCopy;
	uint32_t	ContextSwitches;
	uint32_t	SetMemberCopy;
	voidstruct Ptr32	Used_Self;
	struct _KPCRstruct Ptr32	SelfPcr;
	struct _KPRCBstruct Ptr32	Prcb;
	uint8_t	Irql;
	uint32_t	IRR;
	uint32_t	IrrActive;
	uint32_t	IDR;
	voidstruct Ptr32	KdVersionBlock;
	struct _KIDTENTRYstruct Ptr32	IDT;
	struct _KGDTENTRYstruct Ptr32	GDT;
	struct _KTSSstruct Ptr32	TSS;
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
