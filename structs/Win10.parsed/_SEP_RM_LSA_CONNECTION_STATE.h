
struct _SEP_RM_LSA_CONNECTION_STATE {
	void	*LsaProcessHandle;
	void	*LsaCommandPortHandle;
	void	*SepRmThreadHandle;
	void	*RmCommandPortHandle;
	void	*RmCommandServerPortHandle;
	void	*LsaCommandPortSectionHandle;
	struct _LARGE_INTEGER	LsaCommandPortSectionSize;
	void	*LsaViewPortMemory;
	void	*RmViewPortMemory;
	int32_t	LsaCommandPortMemoryDelta;
	uint8_t	LsaCommandPortActive;
}__attribute__((packed));
