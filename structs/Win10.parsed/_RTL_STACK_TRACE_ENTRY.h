/* TraceCount */
#define	BlockDepth	0x0000F800

struct _RTL_STACK_TRACE_ENTRY {
	struct _RTL_STD_LIST_ENTRY	HashChain;
	struct Bitsstruct 11struct 0,struct Pos	TraceCount;
	uint16_t	IndexHigh;
	uint16_t	Index;
	uint16_t	Depth;
	union {
		void	*BackTrace[32];
		struct _SLIST_ENTRY	FreeChain;
	};
}__attribute__((packed));
