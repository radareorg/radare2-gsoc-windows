
struct _DRIVER_EXTENSION {
	struct _DRIVER_OBJECTstruct Ptr32	DriverObject;
	struct longstruct Ptr32	AddDevice;
	uint32_t	Count;
	struct _UNICODE_STRING	ServiceKeyName;
	struct _IO_CLIENT_EXTENSIONstruct Ptr32	ClientDriverExtension;
	struct _FS_FILTER_CALLBACKSstruct Ptr32	FsFilterCallbacks;
}__attribute__((packed));
