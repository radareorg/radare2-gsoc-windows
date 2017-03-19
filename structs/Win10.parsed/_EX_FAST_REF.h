
/* *Object */
#define	RefCnt	0x0000000F

struct _EX_FAST_REF {
	union {
		void	*Object;
		uint64_t	Value;
	};
}__attribute__((packed));
