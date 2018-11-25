
struct _TEB_ACTIVE_FRAME {
	uint32_t	Flags;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _TEB_ACTIVE_FRAME	*Previous;
	struct _TEB_ACTIVE_FRAME_CONTEXT	*Context;
}__attribute__((packed));
