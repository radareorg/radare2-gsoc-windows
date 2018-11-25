
/* RefCountField */
#define	Unlocked	0x00000001
#define	RefCnt	0x0001FFFE
#define	Attributes	0x000E0000
#define	ObjectPointerBits	0xFFFFFFFFFFF00000

/* ObjectPointerBits */
#define	GrantedAccessBits	0x01FFFFFF
#define	NoRightsUpgrade	0x02000000
#define	Spare1	0xFC000000

struct _HANDLE_TABLE_ENTRY {
	union {
		int64_t	VolatileLowValue;
		int64_t	LowValue;
		struct _HANDLE_TABLE_ENTRY_INFO	*InfoTable;
	};
	union {
		int64_t	HighValue;
		struct _HANDLE_TABLE_ENTRY	*NextFreeHandleEntry;
		struct _EXHANDLE	LeafHandleValue;
	};
	int64_t	RefCountField;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint32_t	Spare2;
}__attribute__((packed));
