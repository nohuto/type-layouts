struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=211)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _DOT11_ADDITIONAL_IE// Size=0x14 (Id=977)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uBeaconIEsOffset;// Offset=0x4 Size=0x4
    unsigned long uBeaconIEsLength;// Offset=0x8 Size=0x4
    unsigned long uResponseIEsOffset;// Offset=0xc Size=0x4
    unsigned long uResponseIEsLength;// Offset=0x10 Size=0x4
};
