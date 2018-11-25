
/* VirtualAddress */
#define	DontUse0	0x00000007
#define	Spare0	0xFFFFFFF8

struct _MM_PAGE_ACCESS_INFO {
	union {
		struct _MM_PAGE_ACCESS_INFO_FLAGS	Flags;
		uint64_t	FileOffset;
		voidstruct Ptr32	VirtualAddress;
	};
	voidstruct Ptr32	PointerProtoPte;
}__attribute__((packed));
