struct _OBJECT_TYPE {
	struct _LIST_ENTRY	TypeList;
	struct _UNICODE_STRING	Name;
	void	*DefaultObject;
	uint8_t	Index;
	uint32_t	TotalNumberOfObjects;
	uint32_t	TotalNumberOfHandles;
	uint32_t	HighWaterNumberOfObjects;
	uint32_t	HighWaterNumberOfHandles;
	struct _OBJECT_TYPE_INITIALIZER	TypeInfo;
	struct _EX_PUSH_LOCK	TypeLock;
	uint32_t	Key;
	struct _LIST_ENTRY	CallbackList;
}__attribute__((packed));
