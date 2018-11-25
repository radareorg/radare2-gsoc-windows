
struct _PPM_SELECTION_MENU_ENTRY {
	uint8_t	StrictDependency;
	uint8_t	InitiatingState;
	uint8_t	DependentState;
	uint8_t	__padding__;
	uint32_t	StateIndex;
	uint32_t	Dependencies;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _PPM_SELECTION_DEPENDENCY	*DependencyList;
}__attribute__((packed));
