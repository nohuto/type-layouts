struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_QOS_OFFLOAD_CAPABILITIES// Size=0x50 (Id=1054)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long SupportedSqTypes;// Offset=0x8 Size=0x4
    unsigned char TransmitCapSupported[8];// Offset=0xc Size=0x8
    unsigned char TransmitReservationSupported[8];// Offset=0x14 Size=0x8
    unsigned char ReceiveCapSupported[8];// Offset=0x1c Size=0x8
    unsigned char TransmitGftCapSupported[8];// Offset=0x24 Size=0x8
    unsigned char ReceiveGftCapSupported[8];// Offset=0x2c Size=0x8
    unsigned char TcSupportedTable[8];// Offset=0x34 Size=0x8
    unsigned long NumStandardSqsSupported;// Offset=0x3c Size=0x4
    unsigned long NumGftSqsSupported;// Offset=0x40 Size=0x4
    unsigned long ReservationGranularitySupported;// Offset=0x44 Size=0x4
    unsigned long MaxNumSqInputs;// Offset=0x48 Size=0x4
    unsigned char CrossTcTransmitMaxCapSupported;// Offset=0x4c Size=0x1
};
