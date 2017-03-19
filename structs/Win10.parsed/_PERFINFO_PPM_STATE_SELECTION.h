
struct _PERFINFO_PPM_STATE_SELECTION {
	uint32_t	SelectedState;
	uint32_t	VetoedStates;
	uint32_t	VetoReason[1];
}__attribute__((packed));
