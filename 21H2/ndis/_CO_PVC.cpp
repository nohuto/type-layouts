struct _CO_SPECIFIC_PARAMETERS// Size=0xc (Id=845)
{
    unsigned long ParamType;// Offset=0x0 Size=0x4
    unsigned long Length;// Offset=0x4 Size=0x4
    unsigned char Parameters[1];// Offset=0x8 Size=0x1
};

struct _CO_PVC// Size=0x18 (Id=1391)
{
    void * NdisAfHandle;// Offset=0x0 Size=0x8
    struct _CO_SPECIFIC_PARAMETERS PvcParameters;// Offset=0x8 Size=0xc
};
