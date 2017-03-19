
struct _TEB_ACTIVE_FRAME {
	uint32_t	Flags;
	struct _TEB_ACTIVE_FRAME	*Previous;
	struct _TEB_ACTIVE_FRAME_CONTEXT	*Context;
}__attribute__((packed));
