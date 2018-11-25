
struct _AUX_ACCESS_DATA {
	struct _PRIVILEGE_SET	*PrivilegesUsed;
	struct _GENERIC_MAPPING	GenericMapping;
	uint32_t	AccessesToAudit;
	uint32_t	MaximumAuditMask;
	struct _GUID	TransactionId;
	void	*NewSecurityDescriptor;
	void	*ExistingSecurityDescriptor;
	void	*ParentSecurityDescriptor;
	void	*DeRefSecurityDescriptor;
	void	*SDLock;
	struct _ACCESS_REASONS	AccessReasons;
	uint8_t	GenerateStagingEvents;
}__attribute__((packed));
