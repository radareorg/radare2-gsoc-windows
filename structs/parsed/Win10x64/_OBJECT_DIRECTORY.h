
struct _OBJECT_DIRECTORY {
	struct _OBJECT_DIRECTORY_ENTRY	*HashBuckets[37];
	struct _EX_PUSH_LOCK	Lock;
	struct _DEVICE_MAP	*DeviceMap;
	struct _OBJECT_DIRECTORY	*ShadowDirectory;
	uint32_t	SessionId;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*NamespaceEntry;
	void	*SessionObject;
	uint32_t	Flags;
}__attribute__((packed));
