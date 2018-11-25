
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
	uint32_t	ObjectTypeCode;
	uint32_t	InvalidAttributes;
	struct _GENERIC_MAPPING	GenericMapping;
	uint32_t	ValidAccessMask;
	uint32_t	RetainAccess;
	struct _POOL_TYPE	PoolType;
	uint32_t	DefaultPagedPoolCharge;
	uint32_t	DefaultNonPagedPoolCharge;
	voidstruct Ptr32	DumpProcedure;
	struct longstruct Ptr32	OpenProcedure;
	voidstruct Ptr32	CloseProcedure;
	voidstruct Ptr32	DeleteProcedure;
	struct longstruct Ptr32	ParseProcedure;
	struct longstruct Ptr32	SecurityProcedure;
	struct longstruct Ptr32	QueryNameProcedure;
	struct charstruct unsignedstruct Ptr32	OkayToCloseProcedure;
}__attribute__((packed));
