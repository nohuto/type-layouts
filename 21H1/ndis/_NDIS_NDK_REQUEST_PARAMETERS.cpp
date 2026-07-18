struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_NDK_CAPABILITIES// Size=0x38 (Id=1679)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long MaxQpCount;// Offset=0x8 Size=0x4
    unsigned long MaxCqCount;// Offset=0xc Size=0x4
    unsigned long MaxMrCount;// Offset=0x10 Size=0x4
    unsigned long MaxPdCount;// Offset=0x14 Size=0x4
    unsigned long MaxInboundReadLimit;// Offset=0x18 Size=0x4
    unsigned long MaxOutboundReadLimit;// Offset=0x1c Size=0x4
    unsigned long MaxMwCount;// Offset=0x20 Size=0x4
    unsigned long MaxSrqCount;// Offset=0x24 Size=0x4
    unsigned long long MissingCounterMask;// Offset=0x28 Size=0x8
    struct _NDK_ADAPTER_INFO * NdkInfo;// Offset=0x30 Size=0x8
};

struct _NDIS_NDK_REQUEST_PARAMETERS// Size=0x68 (Id=2018)
{
    unsigned char RdmaRequested;// Offset=0x0 Size=0x1
    unsigned int SwitchPortId;// Offset=0x4 Size=0x4
    unsigned long IfIndex;// Offset=0x8 Size=0x4
    unsigned char MacAddress[32];// Offset=0xc Size=0x20
    unsigned int VlanId;// Offset=0x2c Size=0x4
    struct _NDIS_NDK_CAPABILITIES NdkReserved;// Offset=0x30 Size=0x38
};
