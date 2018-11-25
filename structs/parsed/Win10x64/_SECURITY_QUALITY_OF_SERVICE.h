
struct _SECURITY_QUALITY_OF_SERVICE {
	uint32_t	Length;
	struct _SECURITY_IMPERSONATION_LEVEL	ImpersonationLevel;
	uint8_t	ContextTrackingMode;
	uint8_t	EffectiveOnly;
}__attribute__((packed));
