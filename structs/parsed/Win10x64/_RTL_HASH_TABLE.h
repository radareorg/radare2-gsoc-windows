
/* EntryCount */
#define	MaskBitCount	0x0000001F
#define	BucketCount	0xFFFFFFE0

struct _RTL_HASH_TABLE {
	uint32_t	EntryCount;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _SINGLE_LIST_ENTRY	*Buckets;
}__attribute__((packed));
