
/* ImpersonationToken */
#define	ImpersonationLevel	0x00000003
#define	EffectiveOnly	0x00000004

struct _PS_CLIENT_SECURITY_CONTEXT {
	union {
		uint32_t	ImpersonationData;
		voidstruct Ptr32	ImpersonationToken;
	};
}__attribute__((packed));
