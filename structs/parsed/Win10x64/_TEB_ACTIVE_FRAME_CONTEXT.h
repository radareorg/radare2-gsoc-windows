
struct _TEB_ACTIVE_FRAME_CONTEXT {
	uint32_t	Flags;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct Char	*FrameName;
}__attribute__((packed));
