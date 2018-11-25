
/* Value */
#define	TagBits	0x00000003
#define	Index	0xFFFFFFFC

struct _EXHANDLE {
	union {
		void	*GenericHandleOverlay;
		uint64_t	Value;
	};
}__attribute__((packed));
