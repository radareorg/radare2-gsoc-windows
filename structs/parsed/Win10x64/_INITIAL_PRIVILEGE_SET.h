
struct _INITIAL_PRIVILEGE_SET {
	uint32_t	PrivilegeCount;
	uint32_t	Control;
	struct _LUID_AND_ATTRIBUTES	Privilege[3];
}__attribute__((packed));
