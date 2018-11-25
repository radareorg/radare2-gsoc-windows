
struct _IO_SECURITY_CONTEXT {
	struct _SECURITY_QUALITY_OF_SERVICEstruct Ptr32	SecurityQos;
	struct _ACCESS_STATEstruct Ptr32	AccessState;
	uint32_t	DesiredAccess;
	uint32_t	FullCreateOptions;
}__attribute__((packed));
