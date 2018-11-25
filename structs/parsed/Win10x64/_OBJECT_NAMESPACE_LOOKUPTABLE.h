
struct _OBJECT_NAMESPACE_LOOKUPTABLE {
	struct _LIST_ENTRY	HashBuckets[37];
	struct _EX_PUSH_LOCK	Lock;
	uint32_t	NumberOfPrivateSpaces;
}__attribute__((packed));
