
/* EntryCount */
#define	MaskBitCount	0x0000001F
#define	BucketCount	0xFFFFFFE0

struct _RTL_HASH_TABLE {
	uint32_t	EntryCount;
	struct _SINGLE_LIST_ENTRY	*Buckets;
}__attribute__((packed));
