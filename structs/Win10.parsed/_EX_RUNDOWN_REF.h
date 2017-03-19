
struct _EX_RUNDOWN_REF {
	union {
		uint64_t	Count;
		void	*Ptr;
	};
}__attribute__((packed));
