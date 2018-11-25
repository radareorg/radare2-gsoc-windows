
/* AllFlags */
#define	Type	0x00000001
#define	Disabled	0x00000002
#define	Spare1	0xFFFFFFFC

struct _KSCHEDULING_GROUP_POLICY {
	union {
		uint32_t	Value;
		uint16_t	Weight;
		uint16_t	MinRate;
	};
	uint16_t	MaxRate;
	uint32_t	AllFlags;
}__attribute__((packed));
