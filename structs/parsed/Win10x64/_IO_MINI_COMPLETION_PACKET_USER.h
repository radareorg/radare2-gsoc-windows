
struct _IO_MINI_COMPLETION_PACKET_USER {
	struct _LIST_ENTRY	ListEntry;
	uint32_t	PacketType;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	void	*KeyContext;
	void	*ApcContext;
	int32_t	IoStatus;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint64_t	IoStatusInformation;
	void	*MiniPacketCallback;
	void	*Context;
	uint8_t	Allocated;
}__attribute__((packed));
