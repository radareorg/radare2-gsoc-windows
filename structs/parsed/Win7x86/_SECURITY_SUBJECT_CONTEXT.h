
struct _SECURITY_SUBJECT_CONTEXT {
	voidstruct Ptr32	ClientToken;
	struct _SECURITY_IMPERSONATION_LEVEL	ImpersonationLevel;
	voidstruct Ptr32	PrimaryToken;
	voidstruct Ptr32	ProcessAuditId;
}__attribute__((packed));
