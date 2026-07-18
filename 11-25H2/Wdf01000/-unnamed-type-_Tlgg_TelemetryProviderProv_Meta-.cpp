struct _GUID// Size=0x10 (Id=118)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _tlgProviderMetadata_t// Size=0x13 (Id=950)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    struct _GUID ProviderId;// Offset=0x1 Size=0x10
    unsigned short RemainingSize;// Offset=0x11 Size=0x2
};

struct <unnamed-type-_Tlgg_TelemetryProviderProv_Meta>// Size=0x3c (Id=461)
{
    struct _tlgProviderMetadata_t _tlgProv;// Offset=0x0 Size=0x13
    char _tlgName[22];// Offset=0x13 Size=0x16
    unsigned short _tlgOptionSize0;// Offset=0x29 Size=0x2
    unsigned char _tlgTraitType0;// Offset=0x2b Size=0x1
    struct _GUID _tlgOptionVal0;// Offset=0x2c Size=0x10
};
