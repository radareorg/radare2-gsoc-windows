
struct _OBP_SILODRIVERSTATE {
	struct _DEVICE_MAP	*SystemDeviceMap;
	struct _OBP_SYSTEM_DOS_DEVICE_STATE	SystemDosDeviceState;
	struct _EX_PUSH_LOCK	DeviceMapLock;
	struct _OBJECT_NAMESPACE_LOOKUPTABLE	PrivateNamespaceLookupTable;
}__attribute__((packed));
