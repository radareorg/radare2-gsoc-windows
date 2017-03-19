struct _KDESCRIPTOR {
	uint16_t	Pad[3];
	uint16_t	Limit;
	void	*Base;
}__attribute__((packed));
