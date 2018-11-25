
struct _SECURITY_DESCRIPTOR {
	uint8_t	Revision;
	uint8_t	Sbz1;
	uint16_t	Control;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*Owner;
	void	*Group;
	struct _ACL	*Sacl;
	struct _ACL	*Dacl;
}__attribute__((packed));
