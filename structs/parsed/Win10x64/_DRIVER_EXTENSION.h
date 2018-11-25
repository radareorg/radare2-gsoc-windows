
struct _DRIVER_EXTENSION {
	struct _DRIVER_OBJECT	*DriverObject;
	struct long	*AddDevice;
	uint32_t	Count;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _UNICODE_STRING	ServiceKeyName;
	struct _IO_CLIENT_EXTENSION	*ClientDriverExtension;
	struct _FS_FILTER_CALLBACKS	*FsFilterCallbacks;
	void	*KseCallbacks;
	void	*DvCallbacks;
	void	*VerifierContext;
}__attribute__((packed));
