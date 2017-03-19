/* DefaultBitsSet */
#define	SparseRangeArray	0x00000002
#define	NoInternalLocking	0x00000004
#define	SpareFlags	0xFFFFFFF8

/* DefaultBitsSet */
#define	NoInternalLocking	0x00000004
#define	SpareFlags	0xFFFFFFF8

/* DefaultBitsSet */
#define	SpareFlags	0xFFFFFFF8

struct _RTL_SPARSE_BITMAP_CTX {
	uint64_t	Lock;
	struct _RTL_SPARSE_BITMAP_RANGE	**BitmapRanges;
	struct _RTL_BITMAP	RangeArrayCommitStatus;
		*struct void*AllocateRoutine;
	void	*FreeRoutine;
	uint32_t	RangeCount;
	uint32_t	RangeIndexLimit;
	uint32_t	BitsPerRange;
	uint32_t	RangeCountMax;
	uint32_t	RangeMetadataOffset;
	uint32_t	MetadataSizePerBit;
	struct Bitstruct 1struct 0,struct Pos	DefaultBitsSet;
}__attribute__((packed));
