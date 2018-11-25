
/* ActiveProcessors */
#define	AutoAlignment	0x00000001
#define	DisableBoost	0x00000002
#define	DisableQuantum	0x00000004
#define	ActiveGroupsMask	0x00000008
#define	ReservedFlags	0xFFFFFFF0

struct _KPROCESS {
	struct _DISPATCHER_HEADER	Header;
	struct _LIST_ENTRY	ProfileListHead;
	uint32_t	DirectoryTableBase;
	struct _KGDTENTRY	LdtDescriptor;
	struct _KIDTENTRY	Int21Descriptor;
	struct _LIST_ENTRY	ThreadListHead;
	uint32_t	ProcessLock;
	struct _KAFFINITY_EX	Affinity;
	struct _LIST_ENTRY	ReadyListHead;
	struct _SINGLE_LIST_ENTRY	SwapListEntry;
	struct _KAFFINITY_EX	ActiveProcessors;
	int32_t	ProcessFlags;
	struct Char	BasePriority;
	struct Char	QuantumReset;
	uint8_t	Visited;
	uint8_t	Unused3;
	uint32_t	ThreadSeed[1];
	uint16_t	IdealNode[1];
	uint16_t	IdealGlobalNode;
	struct _KEXECUTE_OPTIONS	Flags;
	uint8_t	AddressPolicy;
	uint16_t	IopmOffset;
	uint32_t	Unused4;
	struct _KSTACK_COUNT	StackCount;
	struct _LIST_ENTRY	ProcessListEntry;
	uint64_t	CycleTime;
	uint32_t	KernelTime;
	uint32_t	UserTime;
	void	*VdmTrapcHandler;
}__attribute__((packed));
