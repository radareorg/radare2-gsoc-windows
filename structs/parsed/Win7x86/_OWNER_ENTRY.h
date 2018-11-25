
/* OwnerThread */
#define	IoPriorityBoosted	0x00000001
#define	OwnerReferenced	0x00000002
#define	OwnerCount	0xFFFFFFFC

struct _OWNER_ENTRY {
	uint32_t	OwnerThread;
	uint32_t	TableSize;
}__attribute__((packed));
