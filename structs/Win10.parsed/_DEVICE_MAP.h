struct _DEVICE_MAP {
	struct _OBJECT_DIRECTORY	*DosDevicesDirectory;
	struct _OBJECT_DIRECTORY	*GlobalDosDevicesDirectory;
	void	*DosDevicesDirectoryHandle;
	int32_t	ReferenceCount;
	uint32_t	DriveMap;
	uint8_t	DriveType[32];
	struct _EJOB	*ServerSilo;
}__attribute__((packed));
