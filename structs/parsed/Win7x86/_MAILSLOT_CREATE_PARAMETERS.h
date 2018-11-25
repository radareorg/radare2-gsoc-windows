
struct _MAILSLOT_CREATE_PARAMETERS {
	uint32_t	MailslotQuota;
	uint32_t	MaximumMessageSize;
	struct _LARGE_INTEGER	ReadTimeout;
	uint8_t	TimeoutSpecified;
}__attribute__((packed));
