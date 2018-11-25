
struct _PPM_SELECTION_MENU {
	uint32_t	Count;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _PPM_SELECTION_MENU_ENTRY	*Entries;
}__attribute__((packed));
