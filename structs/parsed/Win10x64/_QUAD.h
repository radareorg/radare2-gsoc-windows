
struct _QUAD {
	union {
		int64_t	UseThisFieldToCopy;
		float	DoNotUseThisField;
	};
}__attribute__((packed));
