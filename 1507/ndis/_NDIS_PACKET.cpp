struct _NDIS_PACKET_PRIVATE// Size=0x30 (Id=124)
{
    unsigned int PhysicalCount;// Offset=0x0 Size=0x4
    unsigned int TotalLength;// Offset=0x4 Size=0x4
    struct _MDL * Head;// Offset=0x8 Size=0x8
    struct _MDL * Tail;// Offset=0x10 Size=0x8
    void * Pool;// Offset=0x18 Size=0x8
    unsigned int Count;// Offset=0x20 Size=0x4
    unsigned long Flags;// Offset=0x24 Size=0x4
    unsigned char ValidCounts;// Offset=0x28 Size=0x1
    unsigned char NdisPacketFlags;// Offset=0x29 Size=0x1
    unsigned short NdisPacketOobOffset;// Offset=0x2a Size=0x2
};

struct _NDIS_PACKET// Size=0x68 (Id=123)
{
    struct _NDIS_PACKET_PRIVATE Private;// Offset=0x0 Size=0x30
    union // Size=0x50 (Id=0)
    {
        unsigned char MiniportReserved[16];// Offset=0x30 Size=0x10
        unsigned char WrapperReserved[16];// Offset=0x40 Size=0x10
        unsigned char MiniportReservedEx[24];// Offset=0x30 Size=0x18
        unsigned char WrapperReservedEx[8];// Offset=0x48 Size=0x8
        unsigned char MacReserved[32];// Offset=0x30 Size=0x20
    };
    unsigned long long Reserved[2];// Offset=0x50 Size=0x10
    unsigned char ProtocolReserved[1];// Offset=0x60 Size=0x1
};
