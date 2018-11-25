
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
	struct _SECURITY_SUBJECT_CONTEXT	SubjectSecurityContext;
	voidstruct Ptr32	SecurityDescriptor;
	voidstruct Ptr32	AuxData;
	struct <unnamed-tag>	Privileges;
	uint8_t	AuditPrivileges;
	struct _UNICODE_STRING	ObjectName;
	struct _UNICODE_STRING	ObjectTypeName;
}__attribute__((packed));
