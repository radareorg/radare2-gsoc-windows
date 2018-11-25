
struct _TEB_ACTIVE_FRAME_CONTEXT {
	uint32_t	Flags;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct Char	*FrameName;
}__attribute__((packed));
