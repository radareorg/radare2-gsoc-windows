
struct _TP_CALLBACK_ENVIRON_V3 {
	uint32_t	Version;
	struct _TP_POOLstruct Ptr32	Pool;
	struct _TP_CLEANUP_GROUPstruct Ptr32	CleanupGroup;
	voidstruct Ptr32	CleanupGroupCancelCallback;
	voidstruct Ptr32	RaceDll;
	struct _ACTIVATION_CONTEXTstruct Ptr32	ActivationContext;
	voidstruct Ptr32	FinalizationCallback;
	struct <unnamed-tag>	u;
	struct _TP_CALLBACK_PRIORITY	CallbackPriority;
	uint32_t	Size;
}__attribute__((packed));
