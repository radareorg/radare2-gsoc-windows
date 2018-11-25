
/* *AllBits */
#define	Invalid	0x00000001
#define	AllocationInProgress	0x00000002
#define	Spare0	0x0000FFFC

struct _HEAP_LFH_ONDEMAND_POINTER {
	uint16_t	UsageData;
	void	*AllBits;
}__attribute__((packed));
