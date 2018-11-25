
struct _INTERFACE {
	uint16_t	Size;
	uint16_t	Version;
	void	*Context;
	void	*InterfaceReference;
	void	*InterfaceDereference;
}__attribute__((packed));
