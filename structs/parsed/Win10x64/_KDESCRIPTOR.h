
struct _KDESCRIPTOR {
	uint16_t	Pad[3];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint16_t	Limit;
	void	*Base;
}__attribute__((packed));
