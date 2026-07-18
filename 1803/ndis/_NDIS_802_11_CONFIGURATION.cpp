struct _NDIS_802_11_CONFIGURATION_FH// Size=0x10 (Id=1345)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long HopPattern;// Offset=0x4 Size=0x4
    unsigned long HopSet;// Offset=0x8 Size=0x4
    unsigned long DwellTime;// Offset=0xc Size=0x4
};

struct _NDIS_802_11_CONFIGURATION// Size=0x20 (Id=626)
{
    unsigned long Length;// Offset=0x0 Size=0x4
    unsigned long BeaconPeriod;// Offset=0x4 Size=0x4
    unsigned long ATIMWindow;// Offset=0x8 Size=0x4
    unsigned long DSConfig;// Offset=0xc Size=0x4
    struct _NDIS_802_11_CONFIGURATION_FH FHConfig;// Offset=0x10 Size=0x10
};
