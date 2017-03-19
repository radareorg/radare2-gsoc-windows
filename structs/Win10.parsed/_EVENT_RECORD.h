
struct _EVENT_RECORD {
	struct _EVENT_HEADER	EventHeader;
	struct _ETW_BUFFER_CONTEXT	BufferContext;
	uint16_t	ExtendedDataCount;
	uint16_t	UserDataLength;
	struct _EVENT_HEADER_EXTENDED_DATA_ITEM	*ExtendedData;
	void	*UserData;
	void	*UserContext;
}__attribute__((packed));
