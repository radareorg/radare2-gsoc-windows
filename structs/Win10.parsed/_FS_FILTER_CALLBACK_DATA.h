struct _FS_FILTER_CALLBACK_DATA {
	uint32_t	SizeOfFsFilterCallbackData;
	uint8_t	Operation;
	uint8_t	Reserved;
	struct _DEVICE_OBJECT	*DeviceObject;
	struct _FILE_OBJECT	*FileObject;
	struct _FS_FILTER_PARAMETERS	Parameters;
}__attribute__((packed));
