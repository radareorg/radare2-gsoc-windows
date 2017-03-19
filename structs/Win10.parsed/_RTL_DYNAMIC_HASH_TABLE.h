
struct _RTL_DYNAMIC_HASH_TABLE {
	uint32_t	Flags;
	uint32_t	Shift;
	uint32_t	TableSize;
	uint32_t	Pivot;
	uint32_t	DivisorMask;
	uint32_t	NumEntries;
	uint32_t	NonEmptyBuckets;
	uint32_t	NumEnumerators;
	void	*Directory;
}__attribute__((packed));
