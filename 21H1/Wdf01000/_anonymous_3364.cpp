struct _GUID// Size=0x10 (Id=107)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _tlgProviderMetadata_t// Size=0x13 (Id=442)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    struct _GUID ProviderId;// Offset=0x1 Size=0x10
    unsigned short RemainingSize;// Offset=0x11 Size=0x2
};

struct _anonymous_3364// Size=0x36 (Id=3364)
{
    struct _tlgProviderMetadata_t _tlgProv;// Offset=0x0 Size=0x13
    char _tlgName[16];// Offset=0x13 Size=0x10
    unsigned short _tlgOptionSize1;// Offset=0x23 Size=0x2
    unsigned char _tlgOptionEnum1;// Offset=0x25 Size=0x1
    struct _GUID _tlgOptionVal1;// Offset=0x26 Size=0x10
};
