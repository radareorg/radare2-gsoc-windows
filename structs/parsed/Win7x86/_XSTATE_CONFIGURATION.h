
/* Size */
#define	OptimizedSave	0x00000001

struct _XSTATE_CONFIGURATION {
	uint64_t	EnabledFeatures;
	uint32_t	Size;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _XSTATE_FEATURE	Features[64];
}__attribute__((packed));
