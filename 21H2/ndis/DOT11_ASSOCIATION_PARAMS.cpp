struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct DOT11_ASSOCIATION_PARAMS// Size=0x14 (Id=1346)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned char BSSID[6];// Offset=0x4 Size=0x6
    unsigned long uAssocRequestIEsOffset;// Offset=0xc Size=0x4
    unsigned long uAssocRequestIEsLength;// Offset=0x10 Size=0x4
};
