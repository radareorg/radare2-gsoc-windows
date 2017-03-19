
struct _KPROCESSOR_STATE {
	struct _KSPECIAL_REGISTERS	SpecialRegisters;
	struct _CONTEXT	ContextFrame;
}__attribute__((packed));
