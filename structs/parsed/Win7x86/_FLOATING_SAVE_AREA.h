
struct _FLOATING_SAVE_AREA {
	uint32_t	ControlWord;
	uint32_t	StatusWord;
	uint32_t	TagWord;
	uint32_t	ErrorOffset;
	uint32_t	ErrorSelector;
	uint32_t	DataOffset;
	uint32_t	DataSelector;
	uint8_t	RegisterArea[80];
	uint32_t	Cr0NpxState;
}__attribute__((packed));
