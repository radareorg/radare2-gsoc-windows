
struct _RTL_HASH_TABLE_ITERATOR {
	struct _RTL_HASH_TABLE	*Hash;
	struct _RTL_HASH_ENTRY	*HashEntry;
	struct _SINGLE_LIST_ENTRY	*Bucket;
}__attribute__((packed));
