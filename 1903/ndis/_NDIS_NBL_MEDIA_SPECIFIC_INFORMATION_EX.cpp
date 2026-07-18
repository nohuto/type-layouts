struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX// Size=0x20 (Id=1478)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    struct _NDIS_NBL_MEDIA_SPECIFIC_INFORMATION_EX * NextEntry;// Offset=0x8 Size=0x8
    unsigned long Tag;// Offset=0x10 Size=0x4
    void * Data;// Offset=0x18 Size=0x8
};
