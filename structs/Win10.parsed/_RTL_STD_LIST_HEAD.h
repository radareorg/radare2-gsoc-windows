
struct _RTL_STD_LIST_HEAD {
	struct _RTL_STD_LIST_ENTRY	*Next;
	struct _RTL_STACK_DATABASE_LOCK	Lock;
}__attribute__((packed));
