
struct _PPM_VETO_ACCOUNTING {
	int32_t	VetoPresent;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	struct _LIST_ENTRY	VetoListHead;
	uint8_t	CsAccountingBlocks;
	uint8_t	BlocksDrips;
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint32_t	PreallocatedVetoCount;
	struct _PPM_VETO_ENTRY	*PreallocatedVetoList;
}__attribute__((packed));
