
struct _EXT_DELETE_PARAMETERS {
	uint32_t	Version;
	uint32_t	Reserved;
	void	*DeleteCallback;
	void	*DeleteContext;
}__attribute__((packed));
