/* ImpersonationData */
#define	ImpersonationLevel	0x00000003
#define	EffectiveOnly	0x00000004

/* ImpersonationData */
#define	EffectiveOnly	0x00000004

struct _PS_CLIENT_SECURITY_CONTEXT {
	union {
		uint64_t	ImpersonationData;
		void	*ImpersonationToken;
		struct Bitsstruct 2struct 0,struct Pos	ImpersonationLevel;
		struct Bitstruct 1struct 2,struct Pos	EffectiveOnly;
	};
}__attribute__((packed));
