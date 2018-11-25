
struct _EX_RUNDOWN_REF {
	union {
		uint32_t	Count;
		void	*Ptr;
	};
}__attribute__((packed));
