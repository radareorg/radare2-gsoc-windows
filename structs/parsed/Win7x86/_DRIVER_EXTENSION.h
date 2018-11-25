
struct _DRIVER_EXTENSION {
	struct _DRIVER_OBJECT	*DriverObject;
	struct long	*AddDevice;
	uint32_t	Count;
	struct _UNICODE_STRING	ServiceKeyName;
	struct _IO_CLIENT_EXTENSION	*ClientDriverExtension;
	struct _FS_FILTER_CALLBACKS	*FsFilterCallbacks;
}__attribute__((packed));
