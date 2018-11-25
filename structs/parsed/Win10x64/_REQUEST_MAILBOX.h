
struct _REQUEST_MAILBOX {
	struct _REQUEST_MAILBOX	*Next;
	uint64_t	RequestSummary;
	struct _KREQUEST_PACKET	RequestPacket;
	int32_t	*NodeTargetCountAddr;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	int32_t	NodeTargetCount;
}__attribute__((packed));
