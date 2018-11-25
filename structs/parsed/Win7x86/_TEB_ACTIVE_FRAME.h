
struct _TEB_ACTIVE_FRAME {
	uint32_t	Flags;
	struct _TEB_ACTIVE_FRAMEstruct Ptr32	Previous;
	struct _TEB_ACTIVE_FRAME_CONTEXTstruct Ptr32	Context;
}__attribute__((packed));
