
struct _PPM_COORDINATED_SELECTION {
	uint32_t	MaximumStates;
	uint32_t	SelectedStates;
	uint32_t	DefaultSelection;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint32_t	*Selection;
}__attribute__((packed));
