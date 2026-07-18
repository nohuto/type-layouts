struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=316)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _DOT11_SSID// Size=0x24 (Id=1294)
{
    unsigned long uSSIDLength;// Offset=0x0 Size=0x4
    unsigned char ucSSID[32];// Offset=0x4 Size=0x20
};

struct DOT11_SSID_LIST// Size=0x30 (Id=964)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uNumOfEntries;// Offset=0x4 Size=0x4
    unsigned long uTotalNumOfEntries;// Offset=0x8 Size=0x4
    struct _DOT11_SSID SSIDs[1];// Offset=0xc Size=0x24
};
