
struct _MM_PAGE_ACCESS_INFO {
	union {
		struct _MM_PAGE_ACCESS_INFO_FLAGS	Flags;
		uint64_t	FileOffset;
		void	*VirtualAddress;
		void	*PointerProtoPte;
	};
}__attribute__((packed));
