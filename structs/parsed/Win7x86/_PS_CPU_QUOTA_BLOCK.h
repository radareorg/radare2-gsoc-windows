
/* CapturedWeightData */
#define	DuplicateInputMarker	0x00000001
#define	Reserved	0xFFFFFFFE

struct _PS_CPU_QUOTA_BLOCK {
	struct _LIST_ENTRY	ListEntry;
	uint32_t	SessionId;
	uint32_t	CpuShareWeight;
	struct _PSP_CPU_SHARE_CAPTURED_WEIGHT_DATA	CapturedWeightData;
	int32_t	MiscFlags;
	uint32_t	BlockCurrentGenerationLock;
	uint64_t	CyclesAccumulated;
	uint64_t	CycleCredit;
	uint32_t	BlockCurrentGeneration;
	uint32_t	CpuCyclePercent;
	uint8_t	CyclesFinishedForCurrentGeneration;
	struct _PS_PER_CPU_QUOTA_CACHE_AWARE	Cpu[32];
}__attribute__((packed));
