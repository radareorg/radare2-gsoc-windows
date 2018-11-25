
struct _IO_SECURITY_CONTEXT {
	struct _SECURITY_QUALITY_OF_SERVICE	*SecurityQos;
	struct _ACCESS_STATE	*AccessState;
	uint32_t	DesiredAccess;
	uint32_t	FullCreateOptions;
}__attribute__((packed));
