struct _PS_WAKE_INFORMATION {
	uint64_t	NotificationChannel;
	uint64_t	WakeCounters[5];
	uint64_t	NoWakeCounter;
}__attribute__((packed));
