
struct _SECURITY_DESCRIPTOR {
	uint8_t	Revision;
	uint8_t	Sbz1;
	uint16_t	Control;
	void	*Owner;
	void	*Group;
	struct _ACL	*Sacl;
	struct _ACL	*Dacl;
}__attribute__((packed));
