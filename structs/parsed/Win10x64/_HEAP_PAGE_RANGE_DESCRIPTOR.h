
/* TreeSignature */
#define	ExtraPresent	0x00000001
#define	Spare0	0x0000FFFE

struct _HEAP_PAGE_RANGE_DESCRIPTOR {
	union {
		struct _RTL_BALANCED_NODE	TreeNode;
		uint32_t	TreeSignature;
	};
	uint16_t	UnusedBytes;
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
