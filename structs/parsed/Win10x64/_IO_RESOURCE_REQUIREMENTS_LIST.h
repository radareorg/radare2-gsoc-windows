
struct _IO_RESOURCE_REQUIREMENTS_LIST {
	uint32_t	ListSize;
	struct _INTERFACE_TYPE	InterfaceType;
	uint32_t	BusNumber;
	uint32_t	SlotNumber;
	uint32_t	Reserved[3];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint32_t	AlternativeLists;
	struct _IO_RESOURCE_LIST	List[1];
}__attribute__((packed));
