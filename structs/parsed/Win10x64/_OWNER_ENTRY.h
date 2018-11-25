
/* OwnerThread */
#define	IoPriorityBoosted	0x00000001
#define	OwnerReferenced	0x00000002
#define	IoQoSPriorityBoosted	0x00000004
#define	OwnerCount	0xFFFFFFF8

struct _OWNER_ENTRY {
	uint64_t	OwnerThread;
	uint32_t	TableSize;
}__attribute__((packed));
