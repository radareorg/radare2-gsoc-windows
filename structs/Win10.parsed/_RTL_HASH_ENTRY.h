
struct _RTL_HASH_ENTRY {
	struct _SINGLE_LIST_ENTRY	BucketLink;
	uint64_t	Key;
}__attribute__((packed));
