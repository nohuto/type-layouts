struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=314)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_STATISTICS_INFO// Size=0x98 (Id=990)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long SupportedStatistics;// Offset=0x4 Size=0x4
    unsigned long long ifInDiscards;// Offset=0x8 Size=0x8
    unsigned long long ifInErrors;// Offset=0x10 Size=0x8
    unsigned long long ifHCInOctets;// Offset=0x18 Size=0x8
    unsigned long long ifHCInUcastPkts;// Offset=0x20 Size=0x8
    unsigned long long ifHCInMulticastPkts;// Offset=0x28 Size=0x8
    unsigned long long ifHCInBroadcastPkts;// Offset=0x30 Size=0x8
    unsigned long long ifHCOutOctets;// Offset=0x38 Size=0x8
    unsigned long long ifHCOutUcastPkts;// Offset=0x40 Size=0x8
    unsigned long long ifHCOutMulticastPkts;// Offset=0x48 Size=0x8
    unsigned long long ifHCOutBroadcastPkts;// Offset=0x50 Size=0x8
    unsigned long long ifOutErrors;// Offset=0x58 Size=0x8
    unsigned long long ifOutDiscards;// Offset=0x60 Size=0x8
    unsigned long long ifHCInUcastOctets;// Offset=0x68 Size=0x8
    unsigned long long ifHCInMulticastOctets;// Offset=0x70 Size=0x8
    unsigned long long ifHCInBroadcastOctets;// Offset=0x78 Size=0x8
    unsigned long long ifHCOutUcastOctets;// Offset=0x80 Size=0x8
    unsigned long long ifHCOutMulticastOctets;// Offset=0x88 Size=0x8
    unsigned long long ifHCOutBroadcastOctets;// Offset=0x90 Size=0x8
};
