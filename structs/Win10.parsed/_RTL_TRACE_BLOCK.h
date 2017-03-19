struct _RTL_TRACE_BLOCK {
	uint32_t	Magic;
	uint32_t	Count;
	uint32_t	Size;
	uint64_t	UserCount;
	uint64_t	UserSize;
	void	*UserContext;
	struct _RTL_TRACE_BLOCK	*Next;
	void	**Trace;
}__attribute__((packed));
