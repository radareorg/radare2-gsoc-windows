
struct _PS_IO_CONTROL_ENTRY {
	union {
		struct _RTL_BALANCED_NODE	VolumeTreeNode;
		struct _LIST_ENTRY	FreeListEntry;
	};
	uint64_t	ReservedForParentValue;
	uint64_t	VolumeKey;
	struct _EX_RUNDOWN_REF	Rundown;
	void	*IoControl;
	void	*VolumeIoAttribution;
}__attribute__((packed));
