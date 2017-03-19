struct _PPM_COORDINATED_SELECTION {
	uint32_t	MaximumStates;
	uint32_t	SelectedStates;
	uint32_t	DefaultSelection;
	uint32_t	*Selection;
}__attribute__((packed));
