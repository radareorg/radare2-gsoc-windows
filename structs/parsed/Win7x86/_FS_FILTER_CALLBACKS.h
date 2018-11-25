
struct _FS_FILTER_CALLBACKS {
	uint32_t	SizeOfFsFilterCallbacks;
	uint32_t	Reserved;
	struct long	*PreAcquireForSectionSynchronization;
	void	*PostAcquireForSectionSynchronization;
	struct long	*PreReleaseForSectionSynchronization;
	void	*PostReleaseForSectionSynchronization;
	struct long	*PreAcquireForCcFlush;
	void	*PostAcquireForCcFlush;
	struct long	*PreReleaseForCcFlush;
	void	*PostReleaseForCcFlush;
	struct long	*PreAcquireForModifiedPageWriter;
	void	*PostAcquireForModifiedPageWriter;
	struct long	*PreReleaseForModifiedPageWriter;
	void	*PostReleaseForModifiedPageWriter;
}__attribute__((packed));
