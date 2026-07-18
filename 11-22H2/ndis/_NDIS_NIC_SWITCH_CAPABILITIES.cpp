struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=232)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_NIC_SWITCH_CAPABILITIES// Size=0x84 (Id=747)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long NdisReserved1;// Offset=0x8 Size=0x4
    unsigned long NumTotalMacAddresses;// Offset=0xc Size=0x4
    unsigned long NumMacAddressesPerPort;// Offset=0x10 Size=0x4
    unsigned long NumVlansPerPort;// Offset=0x14 Size=0x4
    unsigned long NdisReserved2;// Offset=0x18 Size=0x4
    unsigned long NdisReserved3;// Offset=0x1c Size=0x4
    unsigned long NicSwitchCapabilities;// Offset=0x20 Size=0x4
    unsigned long MaxNumSwitches;// Offset=0x24 Size=0x4
    unsigned long MaxNumVPorts;// Offset=0x28 Size=0x4
    unsigned long NdisReserved4;// Offset=0x2c Size=0x4
    unsigned long MaxNumVFs;// Offset=0x30 Size=0x4
    unsigned long MaxNumQueuePairs;// Offset=0x34 Size=0x4
    unsigned long NdisReserved5;// Offset=0x38 Size=0x4
    unsigned long NdisReserved6;// Offset=0x3c Size=0x4
    unsigned long NdisReserved7;// Offset=0x40 Size=0x4
    unsigned long MaxNumQueuePairsPerNonDefaultVPort;// Offset=0x44 Size=0x4
    unsigned long NdisReserved8;// Offset=0x48 Size=0x4
    unsigned long NdisReserved9;// Offset=0x4c Size=0x4
    unsigned long NdisReserved10;// Offset=0x50 Size=0x4
    unsigned long NdisReserved11;// Offset=0x54 Size=0x4
    unsigned long NdisReserved12;// Offset=0x58 Size=0x4
    unsigned long MaxNumMacAddresses;// Offset=0x5c Size=0x4
    unsigned long NdisReserved13;// Offset=0x60 Size=0x4
    unsigned long NdisReserved14;// Offset=0x64 Size=0x4
    unsigned long NdisReserved15;// Offset=0x68 Size=0x4
    unsigned long NdisReserved16;// Offset=0x6c Size=0x4
    unsigned long NdisReserved17;// Offset=0x70 Size=0x4
    unsigned long MaxNumRssCapableNonDefaultPFVPorts;// Offset=0x74 Size=0x4
    unsigned long NumberOfIndirectionTableEntriesForDefaultVPort;// Offset=0x78 Size=0x4
    unsigned long NumberOfIndirectionTableEntriesPerNonDefaultPFVPort;// Offset=0x7c Size=0x4
    unsigned long MaxNumQueuePairsForDefaultVPort;// Offset=0x80 Size=0x4
};
