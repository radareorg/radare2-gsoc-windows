
struct _FS_FILTER_PARAMETERS {
	union {
		struct <unnamed-tag>	AcquireForModifiedPageWriter;
		struct <unnamed-tag>	ReleaseForModifiedPageWriter;
		struct <unnamed-tag>	AcquireForSectionSynchronization;
		struct <unnamed-tag>	NotifyStreamFileObject;
		struct <unnamed-tag>	Others;
	};
}__attribute__((packed));
