
struct _JOB_RATE_CONTROL_HEADER {
	void	*RateControlQuotaReference;
	struct _RTL_BITMAP	OverQuotaHistory;
	uint8_t	*BitMapBuffer;
	uint64_t	BitMapBufferSize;
}__attribute__((packed));
