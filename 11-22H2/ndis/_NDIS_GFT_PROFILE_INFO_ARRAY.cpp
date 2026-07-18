struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=232)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFT_PROFILE_INFO_ARRAY// Size=0x14 (Id=1487)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long ProfileInfoArrayOffset;// Offset=0x8 Size=0x4
    unsigned long ProfileInfoArrayNumElements;// Offset=0xc Size=0x4
    unsigned long ProfileInfoArrayElementSize;// Offset=0x10 Size=0x4
};
