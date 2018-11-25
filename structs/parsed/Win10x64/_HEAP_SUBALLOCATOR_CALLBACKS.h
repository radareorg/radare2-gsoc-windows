
struct _HEAP_SUBALLOCATOR_CALLBACKS {
	uint64_t	Allocate;
	uint64_t	Free;
	uint64_t	Commit;
	uint64_t	Decommit;
	uint64_t	ExtendContext;
}__attribute__((packed));
