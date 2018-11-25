
struct _ACCESS_STATE {
	struct _LUID	OperationID;
	uint8_t	SecurityEvaluated;
	uint8_t	GenerateAudit;
	uint8_t	GenerateOnClose;
	uint8_t	PrivilegesAllocated;
	uint32_t	Flags;
	uint32_t	RemainingDesiredAccess;
	uint32_t	PreviouslyGrantedAccess;
	uint32_t	OriginalDesiredAccess;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _SECURITY_SUBJECT_CONTEXT	SubjectSecurityContext;
	void	*SecurityDescriptor;
	void	*AuxData;
	struct <unnamed-tag>	Privileges;
	uint8_t	AuditPrivileges;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	struct _UNICODE_STRING	ObjectName;
	struct _UNICODE_STRING	ObjectTypeName;
}__attribute__((packed));
