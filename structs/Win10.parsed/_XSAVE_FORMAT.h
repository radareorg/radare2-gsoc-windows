
struct _XSAVE_FORMAT {
	uint16_t	ControlWord;
	uint16_t	StatusWord;
	uint8_t	TagWord;
	uint8_t	Reserved1;
	uint16_t	ErrorOpcode;
	uint32_t	ErrorOffset;
	uint16_t	ErrorSelector;
	uint16_t	Reserved2;
	uint32_t	DataOffset;
	uint16_t	DataSelector;
	uint16_t	Reserved3;
	uint32_t	MxCsr;
	uint32_t	MxCsr_Mask;
	struct _M128A	FloatRegisters[8];
	struct _M128A	XmmRegisters[16];
	uint8_t	Reserved4[96];
}__attribute__((packed));
