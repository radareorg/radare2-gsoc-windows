
struct _FS_FILTER_CALLBACK_DATA {
	uint32_t	SizeOfFsFilterCallbackData;
	uint8_t	Operation;
	uint8_t	Reserved;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	struct _DEVICE_OBJECT	*DeviceObject;
	struct _FILE_OBJECT	*FileObject;
	struct _FS_FILTER_PARAMETERS	Parameters;
}__attribute__((packed));
