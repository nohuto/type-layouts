struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct DOT11_STATISTICS// Size=0x190 (Id=829)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long long ullFourWayHandshakeFailures;// Offset=0x8 Size=0x8
    unsigned long long ullTKIPCounterMeasuresInvoked;// Offset=0x10 Size=0x8
    unsigned long long ullReserved;// Offset=0x18 Size=0x8
    struct DOT11_MAC_FRAME_STATISTICS MacUcastCounters;// Offset=0x20 Size=0x70
    struct DOT11_MAC_FRAME_STATISTICS MacMcastCounters;// Offset=0x90 Size=0x70
    struct DOT11_PHY_FRAME_STATISTICS PhyCounters[1];// Offset=0x100 Size=0x90
};
