
/* Value */
#define	State	0x00000003

struct _RTL_RUN_ONCE {
	union {
		void	*Ptr;
		uint64_t	Value;
	};
}__attribute__((packed));
