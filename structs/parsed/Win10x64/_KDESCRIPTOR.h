
struct _KDESCRIPTOR {
	uint16_t	Pad[3];
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint16_t	Limit;
	void	*Base;
}__attribute__((packed));
