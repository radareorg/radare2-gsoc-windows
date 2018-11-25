
struct _MMSUPPORT {
	struct _EX_PUSH_LOCK	WorkingSetMutex;
	struct _KGATEstruct Ptr32	ExitGate;
	voidstruct Ptr32	AccessLog;
	struct _LIST_ENTRY	WorkingSetExpansionLinks;
	uint32_t	AgeDistribution[7];
	uint32_t	MinimumWorkingSetSize;
	uint32_t	WorkingSetSize;
	uint32_t	WorkingSetPrivateSize;
	uint32_t	MaximumWorkingSetSize;
	uint32_t	ChargedWslePages;
	uint32_t	ActualWslePages;
	uint32_t	WorkingSetSizeOverhead;
	uint32_t	PeakWorkingSetSize;
	uint32_t	HardFaultCount;
	struct _MMWSLstruct Ptr32	VmWorkingSetList;
	uint16_t	NextPageColor;
	uint16_t	LastTrimStamp;
	uint32_t	PageFaultCount;
	uint32_t	RepurposeCount;
	voidstruct Ptr32	ShadowMapping;
	struct _MMSUPPORT_FLAGS	Flags;
}__attribute__((packed));