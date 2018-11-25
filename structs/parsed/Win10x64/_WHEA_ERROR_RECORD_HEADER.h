
struct _WHEA_ERROR_RECORD_HEADER {
	uint32_t	Signature;
	struct _WHEA_REVISION	Revision;
	uint32_t	SignatureEnd;
	uint16_t	SectionCount;
	struct _WHEA_ERROR_SEVERITY	Severity;
	struct _WHEA_ERROR_RECORD_HEADER_VALIDBITS	ValidBits;
	uint32_t	Length;
	struct _WHEA_TIMESTAMP	Timestamp;
	struct _GUID	PlatformId;
	struct _GUID	PartitionId;
	struct _GUID	CreatorId;
	struct _GUID	NotifyType;
	uint64_t	RecordId;
	struct _WHEA_ERROR_RECORD_HEADER_FLAGS	Flags;
	struct _WHEA_PERSISTENCE_INFO	PersistenceInfo;
	uint8_t	Reserved[12];
}__attribute__((packed));
