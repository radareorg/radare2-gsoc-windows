
struct _IMAGE_DOS_HEADER {
	uint16_t	e_magic;
	uint16_t	e_cblp;
	uint16_t	e_cp;
	uint16_t	e_crlc;
	uint16_t	e_cparhdr;
	uint16_t	e_minalloc;
	uint16_t	e_maxalloc;
	uint16_t	e_ss;
	uint16_t	e_sp;
	uint16_t	e_csum;
	uint16_t	e_ip;
	uint16_t	e_cs;
	uint16_t	e_lfarlc;
	uint16_t	e_ovno;
	uint16_t	e_res[4];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint16_t	e_oemid;
	uint16_t	e_oeminfo;
	uint16_t	e_res2[10];
	uint8_t	__padding0__;
	uint8_t	__padding1__;
	uint8_t	__padding2__;
	uint8_t	__padding3__;
	uint8_t	__padding4__;
	uint8_t	__padding5__;
	uint8_t	__padding6__;
	uint8_t	__padding7__;
	uint8_t	__padding8__;
	uint8_t	__padding9__;
	uint8_t	__padding10__;
	uint8_t	__padding11__;
	uint8_t	__padding12__;
	uint8_t	__padding13__;
	uint8_t	__padding14__;
	uint8_t	__padding15__;
	uint8_t	__padding16__;
	uint8_t	__padding17__;
	int32_t	e_lfanew;
}__attribute__((packed));
