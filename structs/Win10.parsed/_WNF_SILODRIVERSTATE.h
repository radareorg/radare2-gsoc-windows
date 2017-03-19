
struct _WNF_SILODRIVERSTATE {
	struct _WNF_SCOPE_MAP	*ScopeMap;
	void	*PermanentNameStoreRootKey;
	void	*PersistentNameStoreRootKey;
	int64_t	PermanentNameSequenceNumber;
	struct _WNF_LOCK	PermanentNameSequenceNumberLock;
	int64_t	PermanentNameSequenceNumberPool;
	int64_t	RuntimeNameSequenceNumber;
}__attribute__((packed));
