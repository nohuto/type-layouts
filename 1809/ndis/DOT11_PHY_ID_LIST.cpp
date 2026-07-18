struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=355)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct DOT11_PHY_ID_LIST// Size=0x10 (Id=1187)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uNumOfEntries;// Offset=0x4 Size=0x4
    unsigned long uTotalNumOfEntries;// Offset=0x8 Size=0x4
    unsigned long dot11PhyId[1];// Offset=0xc Size=0x4
};
