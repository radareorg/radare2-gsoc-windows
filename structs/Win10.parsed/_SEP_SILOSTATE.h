
struct _SEP_SILOSTATE {
	struct _SEP_LOGON_SESSION_REFERENCES	*SystemLogonSession;
	struct _SEP_LOGON_SESSION_REFERENCES	*AnonymousLogonSession;
	void	*AnonymousLogonToken;
	void	*AnonymousLogonTokenNoEveryone;
}__attribute__((packed));
