
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
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint8_t	__padding8__;
	uint8_t	__padding9__;
	uint8_t	__padding10__;
	uint8_t	__padding11__;
	uint8_t	__padding12__;
	uint8_t	__padding13__;
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	uint8_t	__padding18__;
	uint8_t	__padding19__;
	uint8_t	__padding20__;
	uint8_t	__padding21__;
	uint8_t	__padding22__;
	uint8_t	__padding23__;
	uint8_t	__padding24__;
	uint8_t	__padding25__;
	uint8_t	__padding26__;
	uint8_t	__padding27__;
	uint8_t	__padding28__;
	uint8_t	__padding29__;
	uint8_t	__padding30__;
	};
	struct _HANDLE_TRACE_DEBUG_INFO	*DebugInfo;
}__attribute__((packed));
