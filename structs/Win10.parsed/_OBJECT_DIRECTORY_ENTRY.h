
struct _OBJECT_DIRECTORY_ENTRY {
	struct _OBJECT_DIRECTORY_ENTRY	*ChainLink;
	void	*Object;
	uint32_t	HashValue;
}__attribute__((packed));
