
/* ExtType */
#define	Linkage	0x00000001
#define	Reserved2	0x0000FFFE

struct _EVENT_HEADER_EXTENDED_DATA_ITEM {
	uint16_t	Reserved1;
	uint16_t	ExtType;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint16_t	DataSize;
	uint64_t	DataPtr;
}__attribute__((packed));
