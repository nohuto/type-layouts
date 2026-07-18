struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

enum _NDIS_QOS_SQ_TYPE
{
    NdisQosSqTypeUndefined=0,
    NdisQosSqTypeStandard=1,
    NdisQosSqTypeGFT=2,
    NdisQosSqTypeMax=3
};

struct _NDIS_QOS_SQ_PARAMETERS// Size=0x80 (Id=1386)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long SqId;// Offset=0x8 Size=0x4
    enum _NDIS_QOS_SQ_TYPE SqType;// Offset=0xc Size=0x4
    unsigned char TcEnabledTable[8];// Offset=0x10 Size=0x8
    unsigned long TcTransmitBandwidthCapTable[8];// Offset=0x18 Size=0x20
    unsigned long TcTransmitBandwidthReservationTable[8];// Offset=0x38 Size=0x20
    unsigned long TcReceiveBandwidthCapTable[8];// Offset=0x58 Size=0x20
    unsigned long CrossTcTransmitBandwidthCap;// Offset=0x78 Size=0x4
    unsigned long MaxNumSqInputs;// Offset=0x7c Size=0x4
};
