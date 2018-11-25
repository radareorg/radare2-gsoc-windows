
/* Bytes[2] */
#define	UnusedBytes	0x00003FFF
#define	ExtraPresent	0x00004000
#define	OneByteUnused	0x00008000

struct _HEAP_LFH_UNUSED_BYTES_INFO {
	uint8_t	Bytes[2];
}__attribute__((packed));
