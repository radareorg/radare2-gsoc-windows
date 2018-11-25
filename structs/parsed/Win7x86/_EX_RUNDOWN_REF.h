
struct _EX_RUNDOWN_REF {
	union {
		uint32_t	Count;
		voidstruct Ptr32	Ptr;
	};
}__attribute__((packed));
