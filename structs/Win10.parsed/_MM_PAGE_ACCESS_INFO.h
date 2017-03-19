struct _MM_PAGE_ACCESS_INFO {
	union {
		union	None;
		void	*PointerProtoPte;
	};
}__attribute__((packed));
