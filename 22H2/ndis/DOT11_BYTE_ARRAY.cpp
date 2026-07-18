struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct DOT11_BYTE_ARRAY// Size=0x10 (Id=1394)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long uNumOfBytes;// Offset=0x4 Size=0x4
    unsigned long uTotalNumOfBytes;// Offset=0x8 Size=0x4
    unsigned char ucBuffer[1];// Offset=0xc Size=0x1
};
