
struct _EVENT_DESCRIPTOR {
	uint16_t	Id;
	uint8_t	Version;
	uint8_t	Channel;
	uint8_t	Level;
	uint8_t	Opcode;
	uint16_t	Task;
	uint64_t	Keyword;
}__attribute__((packed));
