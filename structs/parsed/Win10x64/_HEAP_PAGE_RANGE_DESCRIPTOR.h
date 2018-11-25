
/* TreeSignature */
#define	ExtraPresent	0x00000001
#define	Spare0	0x0000FFFE

struct _HEAP_PAGE_RANGE_DESCRIPTOR {
	union {
		struct _RTL_BALANCED_NODE	TreeNode;
		uint32_t	TreeSignature;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	};
	uint16_t	UnusedBytes;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint8_t	__padding8__;
	uint8_t	__padding9__;
	uint8_t	__padding10__;
	uint8_t	__padding11__;
	uint8_t	__padding12__;
	uint8_t	__padding13__;
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	RangeFlags;
	uint8_t	Spare1;
	union {
		struct _HEAP_DESCRIPTOR_KEY	Key;
		uint8_t	Align;
	};
	union {
		uint8_t	Offset;
		uint8_t	Size;
	};
}__attribute__((packed));
