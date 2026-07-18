struct _GUID// Size=0x10 (Id=334)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _tlgProviderMetadata_t// Size=0x13 (Id=333)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    struct _GUID ProviderId;// Offset=0x1 Size=0x10
    unsigned short RemainingSize;// Offset=0x11 Size=0x2
};
