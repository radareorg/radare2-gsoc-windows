
struct _KTIMER_TABLE_ENTRY {
	uint32_t	Lock;
	struct _LIST_ENTRY	Entry;
	struct _ULARGE_INTEGER	Time;
}__attribute__((packed));
