
struct _EXCEPTION_REGISTRATION_RECORD {
	struct _EXCEPTION_REGISTRATION_RECORD	*Next;
	struct _EXCEPTION_DISPOSITION	*Handler;
}__attribute__((packed));
