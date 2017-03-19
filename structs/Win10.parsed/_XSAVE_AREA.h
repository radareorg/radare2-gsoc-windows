
struct _XSAVE_AREA {
	struct _XSAVE_FORMAT	LegacyState;
	struct _XSAVE_AREA_HEADER	Header;
}__attribute__((packed));
