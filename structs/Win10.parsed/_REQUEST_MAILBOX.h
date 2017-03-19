struct _REQUEST_MAILBOX {
	struct _REQUEST_MAILBOX	*Next;
	uint64_t	RequestSummary;
	struct _KREQUEST_PACKET	RequestPacket;
	int32_t	*NodeTargetCountAddr;
	int32_t	NodeTargetCount;
}__attribute__((packed));
