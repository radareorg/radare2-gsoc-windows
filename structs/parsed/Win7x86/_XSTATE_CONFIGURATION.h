
/* Size */
#define	OptimizedSave	0x00000001

struct _XSTATE_CONFIGURATION {
	uint64_t	EnabledFeatures;
	uint32_t	Size;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _XSTATE_FEATURE	Features[64];
}__attribute__((packed));
