
struct _RTL_BALANCED_LINKS {
	struct _RTL_BALANCED_LINKSstruct Ptr32	Parent;
	struct _RTL_BALANCED_LINKSstruct Ptr32	LeftChild;
	struct _RTL_BALANCED_LINKSstruct Ptr32	RightChild;
	struct Char	Balance;
	uint8_t	Reserved[3];
}__attribute__((packed));
