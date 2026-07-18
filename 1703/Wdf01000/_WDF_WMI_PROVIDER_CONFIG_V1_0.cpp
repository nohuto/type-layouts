struct _GUID// Size=0x10 (Id=117)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

struct _WDF_WMI_PROVIDER_CONFIG_V1_0// Size=0x28 (Id=1802)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    struct _GUID Guid;// Offset=0x4 Size=0x10
    unsigned long Flags;// Offset=0x14 Size=0x4
    unsigned long MinInstanceBufferSize;// Offset=0x18 Size=0x4
    long  ( * EvtWmiProviderFunctionControl)(struct WDFWMIPROVIDER__ * ,enum _WDF_WMI_PROVIDER_CONTROL ,unsigned char );// Offset=0x20 Size=0x8
};
