
/* AllocationTag */
#define	InterceptorIndex	0x0000000F
#define	UserFlags	0x000000F0

struct _SEGMENT_HEAP_EXTRA {
	uint16_t	AllocationTag;
	uint8_t	ExtraSizeInUnits;
	void	*Settable;
}__attribute__((packed));
