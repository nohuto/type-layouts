struct _GUID// Size=0x10 (Id=120)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _TlgProviderMetadata_t// Size=0x13 (Id=645)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    struct _GUID ProviderId;// Offset=0x1 Size=0x10
    unsigned short RemainingSize;// Offset=0x11 Size=0x2
};

struct _anonymous_5911// Size=0x36 (Id=5911)
{
    struct _TlgProviderMetadata_t _TlgProv;// Offset=0x0 Size=0x13
    char _TlgName[16];// Offset=0x13 Size=0x10
    unsigned short _TlgOptionSize1;// Offset=0x23 Size=0x2
    unsigned char _TlgOptionEnum1;// Offset=0x25 Size=0x1
    struct _GUID _TlgOptionVal1;// Offset=0x26 Size=0x10
};
