struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=227)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFT_CUSTOM_ACTION// Size=0x20 (Id=1169)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long ProfileId;// Offset=0x8 Size=0x4
    unsigned long Type;// Offset=0xc Size=0x4
    unsigned long Length;// Offset=0x10 Size=0x4
    union // Size=0x8 (Id=0)
    {
        unsigned long long Alignment;// Offset=0x18 Size=0x8
        unsigned char ActionData[1];// Offset=0x18 Size=0x1
    };
};
