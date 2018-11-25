
struct _MDL {
	struct _MDL	*Next;
	int16_t	Size;
	int16_t	MdlFlags;
	struct _EPROCESS	*Process;
	void	*MappedSystemVa;
	void	*StartVa;
	uint32_t	ByteCount;
	uint32_t	ByteOffset;
}__attribute__((packed));
