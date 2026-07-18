struct _unnamed_855// Size=0x8 (Id=855)
{
    struct // Size=0x8 (Id=0)
    {
        unsigned long long ProvideVirtualAddresses:1;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x1
        unsigned long long Reserved:63;// Offset=0x0 Size=0x8 BitOffset=0x1 BitSize=0x3f
    };
};

struct _STORMQ_MINIPORT_INTERFACE// Size=0x30 (Id=856)
{
    unsigned long Size;// Offset=0x0 Size=0x4
    unsigned short StorMQVersion;// Offset=0x4 Size=0x2
    unsigned short MiniportVersion;// Offset=0x6 Size=0x2
    struct _unnamed_855 Flags;// Offset=0x8 Size=0x8
    unsigned long  ( * HwStorMQCompletionNotifyWithCallback)(void * ,unsigned short ,unsigned short ,unsigned short ,unsigned long  ( * )(void * ,unsigned short ));// Offset=0x10 Size=0x8
    unsigned long  ( * HwStorMQQueryProperty)(void * ,unsigned long ,unsigned long ,unsigned long ,void * );// Offset=0x18 Size=0x8
    unsigned long  ( * HwStorMQSetProperty)(void * ,unsigned long ,unsigned long ,unsigned long ,void * );// Offset=0x20 Size=0x8
    unsigned char  ( * HwStorMQStartSrb)(void * ,void * ,struct _STORAGE_REQUEST_BLOCK * );// Offset=0x28 Size=0x8
};
