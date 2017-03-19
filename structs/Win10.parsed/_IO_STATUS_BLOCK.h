
struct _IO_STATUS_BLOCK {
	union {
		int32_t	Status;
		void	*Pointer;
	};
	uint64_t	Information;
}__attribute__((packed));
