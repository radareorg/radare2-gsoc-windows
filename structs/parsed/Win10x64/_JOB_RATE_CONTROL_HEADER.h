
struct _JOB_RATE_CONTROL_HEADER {
	void	*RateControlQuotaReference;
	struct _RTL_BITMAP	OverQuotaHistory;
	uint8_t	*BitMapBuffer;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint64_t	BitMapBufferSize;
}__attribute__((packed));
