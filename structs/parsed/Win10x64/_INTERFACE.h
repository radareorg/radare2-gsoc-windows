
struct _INTERFACE {
	uint16_t	Size;
	uint16_t	Version;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	void	*Context;
	void	*InterfaceReference;
	void	*InterfaceDereference;
}__attribute__((packed));
