/* UseSegmentHeap */
#define	EnableTagging	0x00000002
#define	EnableStackTracking	0x00000004
#define	DisableDbgBreakOnCorruption	0x00000008

/* UseSegmentHeap */
#define	EnableStackTracking	0x00000004
#define	DisableDbgBreakOnCorruption	0x00000008

/* UseSegmentHeap */
#define	DisableDbgBreakOnCorruption	0x00000008

struct _RTLP_HEAP_FEATURES {
	struct Bitstruct 1struct 0,struct Pos	UseSegmentHeap;
}__attribute__((packed));
