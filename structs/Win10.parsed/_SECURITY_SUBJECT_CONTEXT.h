
struct _SECURITY_SUBJECT_CONTEXT {
	void	*ClientToken;
	struct _SECURITY_IMPERSONATION_LEVEL	ImpersonationLevel;
	void	*PrimaryToken;
	void	*ProcessAuditId;
}__attribute__((packed));
