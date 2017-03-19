
struct _RTL_SPARSE_BITMAP_RANGE {
	uint64_t	Lock;
	struct _RTL_BITMAP	RangeBitmap;
	struct _SINGLE_LIST_ENTRY	Next;
}__attribute__((packed));
