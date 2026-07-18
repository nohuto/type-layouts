struct _anonymous_13// Size=0x8 (Id=13)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
};

union _LARGE_INTEGER// Size=0x8 (Id=322)
{
    unsigned long LowPart;// Offset=0x0 Size=0x4
    long HighPart;// Offset=0x4 Size=0x4
    struct _anonymous_13 u;// Offset=0x0 Size=0x8
    long long QuadPart;// Offset=0x0 Size=0x8
};

struct _SEP_RM_LSA_CONNECTION_STATE// Size=0x30 (Id=641)
{
    void * LsaProcessHandle;// Offset=0x0 Size=0x4
    void * LsaCommandPortHandle;// Offset=0x4 Size=0x4
    void * SepRmThreadHandle;// Offset=0x8 Size=0x4
    void * RmCommandPortHandle;// Offset=0xc Size=0x4
    void * RmCommandServerPortHandle;// Offset=0x10 Size=0x4
    void * LsaCommandPortSectionHandle;// Offset=0x14 Size=0x4
    union _LARGE_INTEGER LsaCommandPortSectionSize;// Offset=0x18 Size=0x8
    void * LsaViewPortMemory;// Offset=0x20 Size=0x4
    void * RmViewPortMemory;// Offset=0x24 Size=0x4
    long LsaCommandPortMemoryDelta;// Offset=0x28 Size=0x4
    unsigned char LsaCommandPortActive;// Offset=0x2c Size=0x1
};
