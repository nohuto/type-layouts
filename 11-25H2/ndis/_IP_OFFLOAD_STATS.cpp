struct _IP_OFFLOAD_STATS// Size=0x40 (Id=1699)
{
    unsigned long long InReceives;// Offset=0x0 Size=0x8
    unsigned long long InOctets;// Offset=0x8 Size=0x8
    unsigned long long InDelivers;// Offset=0x10 Size=0x8
    unsigned long long OutRequests;// Offset=0x18 Size=0x8
    unsigned long long OutOctets;// Offset=0x20 Size=0x8
    unsigned long InHeaderErrors;// Offset=0x28 Size=0x4
    unsigned long InTruncatedPackets;// Offset=0x2c Size=0x4
    unsigned long InDiscards;// Offset=0x30 Size=0x4
    unsigned long OutDiscards;// Offset=0x34 Size=0x4
    unsigned long OutNoRoutes;// Offset=0x38 Size=0x4
};
