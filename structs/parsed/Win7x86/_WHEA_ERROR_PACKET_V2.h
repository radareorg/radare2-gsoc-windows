
struct _WHEA_ERROR_PACKET_V2 {
	uint32_t	Signature;
	uint32_t	Version;
	uint32_t	Length;
	struct _WHEA_ERROR_PACKET_FLAGS	Flags;
	struct _WHEA_ERROR_TYPE	ErrorType;
	struct _WHEA_ERROR_SEVERITY	ErrorSeverity;
	uint32_t	ErrorSourceId;
	struct _WHEA_ERROR_SOURCE_TYPE	ErrorSourceType;
	struct _GUID	NotifyType;
	uint64_t	Context;
	struct _WHEA_ERROR_PACKET_DATA_FORMAT	DataFormat;
	uint32_t	Reserved1;
	uint32_t	DataOffset;
	uint32_t	DataLength;
	uint32_t	PshedDataOffset;
	uint32_t	PshedDataLength;
}__attribute__((packed));
