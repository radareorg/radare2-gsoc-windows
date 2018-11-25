
struct _MMSUPPORT_SHARED {
	int32_t	WorkingSetLock;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	ReleasedCommitDebt;
	uint64_t	ResetPagesRepurposedCount;
	void	*WsSwapSupport;
	void	*CommitReleaseContext;
	void	*AccessLog;
	uint64_t	ChargedWslePages;
	uint64_t	ActualWslePages;
	uint64_t	WorkingSetSizeOverhead;
}__attribute__((packed));
