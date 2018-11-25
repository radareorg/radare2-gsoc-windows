
/* Flags */
#define	StrictFIFO	0x00000001
#define	EnableHandleExceptions	0x00000002
#define	Rundown	0x00000004
#define	Duplicated	0x00000008
#define	RaiseUMExceptionOnInvalidHandleClose	0x00000010

struct _HANDLE_TABLE {
	uint32_t	NextHandleNeedingPool;
	int32_t	ExtraInfoPages;
	uint64_t	TableCode;
	struct _EPROCESS	*QuotaProcess;
	struct _LIST_ENTRY	HandleTableList;
	uint32_t	UniqueProcessId;
	uint32_t	Flags;
	struct _EX_PUSH_LOCK	HandleContentionEvent;
	struct _EX_PUSH_LOCK	HandleTableLock;
	union {
		struct _HANDLE_TABLE_FREE_LIST	FreeLists[1];
		uint8_t	ActualEntry[32];
	};
	struct _HANDLE_TRACE_DEBUG_INFO	*DebugInfo;
}__attribute__((packed));
