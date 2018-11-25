
struct _FS_FILTER_CALLBACKS {
	uint32_t	SizeOfFsFilterCallbacks;
	uint32_t	Reserved;
	struct longstruct Ptr32	PreAcquireForSectionSynchronization;
	voidstruct Ptr32	PostAcquireForSectionSynchronization;
	struct longstruct Ptr32	PreReleaseForSectionSynchronization;
	voidstruct Ptr32	PostReleaseForSectionSynchronization;
	struct longstruct Ptr32	PreAcquireForCcFlush;
	voidstruct Ptr32	PostAcquireForCcFlush;
	struct longstruct Ptr32	PreReleaseForCcFlush;
	voidstruct Ptr32	PostReleaseForCcFlush;
	struct longstruct Ptr32	PreAcquireForModifiedPageWriter;
	voidstruct Ptr32	PostAcquireForModifiedPageWriter;
	struct longstruct Ptr32	PreReleaseForModifiedPageWriter;
	voidstruct Ptr32	PostReleaseForModifiedPageWriter;
}__attribute__((packed));
