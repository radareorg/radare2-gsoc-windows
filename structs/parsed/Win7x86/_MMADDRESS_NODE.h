
struct _MMADDRESS_NODE {
	struct <unnamed-tag>	u1;
	struct _MMADDRESS_NODE	*LeftChild;
	struct _MMADDRESS_NODE	*RightChild;
	uint32_t	StartingVpn;
	uint32_t	EndingVpn;
}__attribute__((packed));
