
struct _HEAP_LFH_SUBSEGMENT {
	union {
		struct _LIST_ENTRY	ListEntry;
		struct _SLIST_ENTRY	Link;
	};
	union {
		struct _HEAP_LFH_SUBSEGMENT_OWNER	*Owner;
		struct _HEAP_LFH_SUBSEGMENT_DELAY_FREE	DelayFree;
	};
	struct _RTL_SRWLOCK	CommitLock;
	uint16_t	FreeCount;
	uint16_t	BlockCount;
	union {
		int16_t	InterlockedShort;
		int32_t	InterlockedLong;
	};
	uint16_t	FreeHint;
	uint8_t	Location;
	uint8_t	Spare;
	struct _HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS	BlockOffsets;
	uint8_t	CommitUnitShift;
	uint8_t	CommitUnitCount;
	uint16_t	CommitStateOffset;
	uint64_t	BlockBitmap[1];
}__attribute__((packed));
