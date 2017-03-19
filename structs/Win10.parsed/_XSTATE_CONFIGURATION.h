
/* ControlFlags */
#define	OptimizedSave	0x00000001
#define	CompactionEnabled	0x00000002

struct _XSTATE_CONFIGURATION {
	uint64_t	EnabledFeatures;
	uint64_t	EnabledVolatileFeatures;
	uint32_t	Size;
	uint32_t	ControlFlags;
	struct _XSTATE_FEATURE	Features[64];
	uint64_t	EnabledSupervisorFeatures;
	uint64_t	AlignedFeatures;
	uint32_t	AllFeatureSize;
	uint32_t	AllFeatures[64];
}__attribute__((packed));
