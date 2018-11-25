
struct _PROC_IDLE_POLICY {
	uint8_t	PromotePercent;
	uint8_t	DemotePercent;
	uint8_t	PromotePercentBase;
	uint8_t	DemotePercentBase;
	uint8_t	AllowScaling;
	uint8_t	ForceLightIdle;
}__attribute__((packed));
