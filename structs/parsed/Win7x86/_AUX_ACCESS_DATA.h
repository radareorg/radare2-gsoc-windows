
struct _AUX_ACCESS_DATA {
	struct _PRIVILEGE_SETstruct Ptr32	PrivilegesUsed;
	struct _GENERIC_MAPPING	GenericMapping;
	uint32_t	AccessesToAudit;
	uint32_t	MaximumAuditMask;
	struct _GUID	TransactionId;
	voidstruct Ptr32	NewSecurityDescriptor;
	voidstruct Ptr32	ExistingSecurityDescriptor;
	voidstruct Ptr32	ParentSecurityDescriptor;
	voidstruct Ptr32	DeRefSecurityDescriptor;
	voidstruct Ptr32	SDLock;
	struct _ACCESS_REASONS	AccessReasons;
}__attribute__((packed));
