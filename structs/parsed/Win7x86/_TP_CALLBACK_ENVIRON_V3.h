
struct _TP_CALLBACK_ENVIRON_V3 {
	uint32_t	Version;
	struct _TP_POOL	*Pool;
	struct _TP_CLEANUP_GROUP	*CleanupGroup;
	void	*CleanupGroupCancelCallback;
	void	*RaceDll;
	struct _ACTIVATION_CONTEXT	*ActivationContext;
	void	*FinalizationCallback;
	struct <unnamed-tag>	u;
	struct _TP_CALLBACK_PRIORITY	CallbackPriority;
	uint32_t	Size;
}__attribute__((packed));
