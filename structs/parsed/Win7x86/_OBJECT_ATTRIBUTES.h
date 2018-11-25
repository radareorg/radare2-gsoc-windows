
struct _OBJECT_ATTRIBUTES {
	uint32_t	Length;
	void	*RootDirectory;
	struct _UNICODE_STRING	*ObjectName;
	uint32_t	Attributes;
	void	*SecurityDescriptor;
	void	*SecurityQualityOfService;
}__attribute__((packed));
