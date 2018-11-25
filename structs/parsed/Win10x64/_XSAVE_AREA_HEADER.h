
struct _XSAVE_AREA_HEADER {
	uint64_t	Mask;
	uint64_t	CompactionMask;
	uint64_t	Reserved2[6];
}__attribute__((packed));
