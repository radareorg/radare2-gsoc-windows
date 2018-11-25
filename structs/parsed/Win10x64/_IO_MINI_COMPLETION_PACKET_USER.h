
struct _IO_MINI_COMPLETION_PACKET_USER {
	struct _LIST_ENTRY	ListEntry;
	uint32_t	PacketType;
	void	*KeyContext;
	void	*ApcContext;
	int32_t	IoStatus;
	uint64_t	IoStatusInformation;
	void	*MiniPacketCallback;
	void	*Context;
	uint8_t	Allocated;
}__attribute__((packed));
