
/* ObjectTypeFlags */
#define	CaseInsensitive	0x00000001
#define	UnnamedObjectsOnly	0x00000002
#define	UseDefaultObject	0x00000004
#define	SecurityRequired	0x00000008
#define	MaintainHandleCount	0x00000010
#define	MaintainTypeList	0x00000020
#define	SupportsObjectCallbacks	0x00000040
#define	CacheAligned	0x00000080

/* ObjectTypeFlags2 */
#define	UseExtendedParameters	0x00000001
#define	Reserved	0x000000FE

struct _OBJECT_TYPE_INITIALIZER {
	uint16_t	Length;
	uint8_t	ObjectTypeFlags;
	uint8_t	ObjectTypeFlags2;
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
	union {
		struct long	*ParseProcedure;
		struct long	*ParseProcedureEx;
	};
	struct long	*SecurityProcedure;
	struct long	*QueryNameProcedure;
	struct charstruct unsigned	*OkayToCloseProcedure;
	uint32_t	WaitObjectFlagMask;
	uint16_t	WaitObjectFlagOffset;
	uint16_t	WaitObjectPointerOffset;
}__attribute__((packed));
