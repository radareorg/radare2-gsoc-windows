
/* ObjectTypeFlags */
#define	CaseInsensitive	0x00000001
#define	UnnamedObjectsOnly	0x00000002
#define	UseDefaultObject	0x00000004
#define	SecurityRequired	0x00000008
#define	MaintainHandleCount	0x00000010
#define	MaintainTypeList	0x00000020
#define	SupportsObjectCallbacks	0x00000040
#define	CacheAligned	0x00000080

struct _OBJECT_TYPE_INITIALIZER {
	uint16_t	Length;
	uint8_t	ObjectTypeFlags;
	uint8_t	__padding0__;
	uint32_t	ObjectTypeCode;
	uint32_t	InvalidAttributes;
	struct _GENERIC_MAPPING	GenericMapping;
	uint32_t	ValidAccessMask;
	uint32_t	RetainAccess;
	struct _POOL_TYPE	PoolType;
	uint32_t	DefaultPagedPoolCharge;
	uint32_t	DefaultNonPagedPoolCharge;
	void	*DumpProcedure;
	struct long	*OpenProcedure;
	void	*CloseProcedure;
	void	*DeleteProcedure;
	struct long	*ParseProcedure;
	struct long	*SecurityProcedure;
	struct long	*QueryNameProcedure;
	struct charstruct unsigned	*OkayToCloseProcedure;
}__attribute__((packed));
