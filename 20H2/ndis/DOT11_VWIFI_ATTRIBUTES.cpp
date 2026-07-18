struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=212)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _DOT11_VWIFI_COMBINATION// Size=0x10 (Id=1560)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uNumInfrastructure;// Offset=0x4 Size=0x4
    unsigned long uNumAdhoc;// Offset=0x8 Size=0x4
    unsigned long uNumSoftAP;// Offset=0xc Size=0x4
};

struct DOT11_VWIFI_ATTRIBUTES// Size=0x18 (Id=1473)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uTotalNumOfEntries;// Offset=0x4 Size=0x4
    struct _DOT11_VWIFI_COMBINATION Combinations[1];// Offset=0x8 Size=0x10
};
