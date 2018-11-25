
/* Flags */
#define	StrictFIFO	0x00000001

struct _HANDLE_TABLE {
	uint32_t	TableCode;
	struct _EPROCESS	*QuotaProcess;
	void	*UniqueProcessId;
	struct _EX_PUSH_LOCK	HandleLock;
	struct _LIST_ENTRY	HandleTableList;
	struct _EX_PUSH_LOCK	HandleContentionEvent;
	struct _HANDLE_TRACE_DEBUG_INFO	*DebugInfo;
	int32_t	ExtraInfoPages;
	uint32_t	Flags;
	uint32_t	FirstFreeHandle;
	struct _HANDLE_TABLE_ENTRY	*LastFreeHandleEntry;
	uint32_t	HandleCount;
	uint32_t	NextHandleNeedingPool;
	uint32_t	HandleCountHighWatermark;
}__attribute__((packed));
