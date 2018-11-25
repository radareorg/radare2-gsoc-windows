
struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR {
	uint32_t	SectionOffset;
	uint32_t	SectionLength;
	struct _WHEA_REVISION	Revision;
	struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_VALIDBITS	ValidBits;
	uint8_t	Reserved;
	struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR_FLAGS	Flags;
	struct _GUID	SectionType;
	struct _GUID	FRUId;
	struct _WHEA_ERROR_SEVERITY	SectionSeverity;
	struct Char	FRUText[20];
}__attribute__((packed));
