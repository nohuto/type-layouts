struct _NDIS_802_11_AI_REQFI// Size=0xa (Id=1111)
{
    unsigned short Capabilities;// Offset=0x0 Size=0x2
    unsigned short ListenInterval;// Offset=0x2 Size=0x2
    unsigned char CurrentAPAddress[6];// Offset=0x4 Size=0x6
};

struct _NDIS_802_11_AI_RESFI// Size=0x6 (Id=726)
{
    unsigned short Capabilities;// Offset=0x0 Size=0x2
    unsigned short StatusCode;// Offset=0x2 Size=0x2
    unsigned short AssociationId;// Offset=0x4 Size=0x2
};

struct _NDIS_802_11_ASSOCIATION_INFORMATION// Size=0x28 (Id=1701)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned short AvailableRequestFixedIEs;// Offset=0x4 Size=0x2
    struct _NDIS_802_11_AI_REQFI RequestFixedIEs;// Offset=0x6 Size=0xa
    unsigned long RequestIELength;// Offset=0x10 Size=0x4
    unsigned long OffsetRequestIEs;// Offset=0x14 Size=0x4
    unsigned short AvailableResponseFixedIEs;// Offset=0x18 Size=0x2
    struct _NDIS_802_11_AI_RESFI ResponseFixedIEs;// Offset=0x1a Size=0x6
    unsigned long ResponseIELength;// Offset=0x20 Size=0x4
    unsigned long OffsetResponseIEs;// Offset=0x24 Size=0x4
};
