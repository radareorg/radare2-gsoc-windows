
struct _WHEA_ERROR_RECORD {
	struct _WHEA_ERROR_RECORD_HEADER	Header;
	struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR	SectionDescriptor[1];
}__attribute__((packed));
