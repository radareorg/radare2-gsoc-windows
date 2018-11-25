
struct _RTL_CHASH_TABLE {
	struct _RTL_CHASH_ENTRY	*Table;
	uint32_t	EntrySizeShift;
	uint32_t	EntryMax;
	uint32_t	EntryCount;
}__attribute__((packed));
