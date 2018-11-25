
struct _FILE_GET_QUOTA_INFORMATION {
	uint32_t	NextEntryOffset;
	uint32_t	SidLength;
	struct _SID	Sid;
}__attribute__((packed));
