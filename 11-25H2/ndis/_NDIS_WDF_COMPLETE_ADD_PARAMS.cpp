struct _GUID// Size=0x10 (Id=2)
{
    unsigned long Data1;// Offset=0x0 Size=0x4
    unsigned short Data2;// Offset=0x4 Size=0x2
    unsigned short Data3;// Offset=0x6 Size=0x2
    unsigned char Data4[8];// Offset=0x8 Size=0x8
};

union _NET_LUID_LH// Size=0x8 (Id=606)
{
    unsigned long long Value;// Offset=0x0 Size=0x8
    struct <unnamed-type-Info>// Size=0x8 (Id=12474)
    {
        unsigned long long Reserved:24;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x18
        unsigned long long NetLuidIndex:24;// Offset=0x0 Size=0x8 BitOffset=0x18 BitSize=0x18
        unsigned long long IfType:16;// Offset=0x0 Size=0x8 BitOffset=0x30 BitSize=0x10
    };
    struct _NET_LUID_LH::<unnamed-type-Info> Info;// Offset=0x0 Size=0x8
};

enum _NDIS_MEDIUM
{
    NdisMedium802_3=0,
    NdisMedium802_5=1,
    NdisMediumFddi=2,
    NdisMediumWan=3,
    NdisMediumLocalTalk=4,
    NdisMediumDix=5,
    NdisMediumArcnetRaw=6,
    NdisMediumArcnet878_2=7,
    NdisMediumAtm=8,
    NdisMediumWirelessWan=9,
    NdisMediumIrda=10,
    NdisMediumBpc=11,
    NdisMediumCoWan=12,
    NdisMedium1394=13,
    NdisMediumInfiniBand=14,
    NdisMediumTunnel=15,
    NdisMediumNative802_11=16,
    NdisMediumLoopback=17,
    NdisMediumWiMAX=18,
    NdisMediumIP=19,
    NdisMediumMax=20
};

struct _UNICODE_STRING// Size=0x10 (Id=156)
{
    unsigned short Length;// Offset=0x0 Size=0x2
    unsigned short MaximumLength;// Offset=0x2 Size=0x2
    wchar_t * Buffer;// Offset=0x8 Size=0x8
};

struct _NDIS_WDF_COMPLETE_ADD_PARAMS// Size=0x58 (Id=927)
{
    struct _GUID InterfaceGuid;// Offset=0x0 Size=0x10
    union _NET_LUID_LH NetLuid;// Offset=0x10 Size=0x8
    enum _NDIS_MEDIUM MediaType;// Offset=0x18 Size=0x4
    struct _UNICODE_STRING BaseName;// Offset=0x20 Size=0x10
    struct _UNICODE_STRING AdapterInstanceName;// Offset=0x30 Size=0x10
    struct _UNICODE_STRING DriverImageName;// Offset=0x40 Size=0x10
    void * ExecutionContextKnobs;// Offset=0x50 Size=0x8
};
