
struct _KTSS64 {
	uint32_t	Reserved0;
	uint64_t	Rsp0;
	uint64_t	Rsp1;
	uint64_t	Rsp2;
	uint64_t	Ist[8];
	uint64_t	Reserved1;
	uint16_t	Reserved2;
	uint16_t	IoMapBase;
}__attribute__((packed));
