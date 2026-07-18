struct _SEP_RM_LSA_CONNECTION_STATE// Size=0x30 (Id=1323)
{
    void * LsaProcessHandle;// Offset=0x0 Size=0x8
    void * LsaCommandPortHandle;// Offset=0x8 Size=0x8
    void * SepRmThreadHandle;// Offset=0x10 Size=0x8
    void * RmCommandPortHandle;// Offset=0x18 Size=0x8
    void * RmCommandServerPortHandle;// Offset=0x20 Size=0x8
    unsigned char LsaCommandPortActive;// Offset=0x28 Size=0x1
};
