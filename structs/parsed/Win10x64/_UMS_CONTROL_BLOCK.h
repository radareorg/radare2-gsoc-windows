
/* *StagingArea */
#define	UmsPrimaryDeliveredContext	0x00000001
#define	UmsAssociatedQueueUsed	0x00000002
#define	UmsThreadParked	0x00000004

struct _UMS_CONTROL_BLOCK {
	struct _RTL_UMS_CONTEXT	*UmsContext;
	struct _SINGLE_LIST_ENTRY	*CompletionListEntry;
	struct _KEVENT	*CompletionListEvent;
	uint32_t	ServiceSequenceNumber;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	struct _KQUEUE	UmsQueue;
	struct _LIST_ENTRY	QueueEntry;
	struct _RTL_UMS_CONTEXT	*YieldingUmsContext;
	void	*YieldingParam;
	void	*UmsTeb;
	struct _KQUEUE	*UmsAssociatedQueue;
	struct _LIST_ENTRY	*UmsQueueListEntry;
	struct _KEVENT	UmsWaitEvent;
	void	*StagingArea;
	uint32_t	UmsFlags;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint8_t	__padding__;
	uint16_t	TebSelector;
}__attribute__((packed));
