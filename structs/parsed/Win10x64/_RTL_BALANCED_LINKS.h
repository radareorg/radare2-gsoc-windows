
struct _RTL_BALANCED_LINKS {
	struct _RTL_BALANCED_LINKS	*Parent;
	struct _RTL_BALANCED_LINKS	*LeftChild;
	struct _RTL_BALANCED_LINKS	*RightChild;
	struct Char	Balance;
	uint8_t	Reserved[3];
}__attribute__((packed));
