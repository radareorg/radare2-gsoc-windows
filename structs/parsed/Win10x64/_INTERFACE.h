
struct _INTERFACE {
	uint16_t	Size;
	uint16_t	Version;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*Context;
	void	*InterfaceReference;
	void	*InterfaceDereference;
}__attribute__((packed));
