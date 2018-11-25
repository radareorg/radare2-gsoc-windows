
/* ExecuteOptions */
#define	ExecuteDisable	0x00000001
#define	ExecuteEnable	0x00000002
#define	DisableThunkEmulation	0x00000004
#define	Permanent	0x00000008
#define	ExecuteDispatchEnable	0x00000010
#define	ImageDispatchEnable	0x00000020
#define	DisableExceptionChainValidation	0x00000040
#define	Spare	0x00000080

struct _KEXECUTE_OPTIONS {
	uint8_t	ExecuteOptions;
}__attribute__((packed));
