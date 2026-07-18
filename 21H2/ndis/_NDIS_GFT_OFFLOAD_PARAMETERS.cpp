struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=210)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFT_OFFLOAD_PARAMETERS// Size=0x14 (Id=958)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long ExceptionVPortId;// Offset=0x8 Size=0x4
    unsigned long CopyLookaheadLength;// Offset=0xc Size=0x4
    unsigned long SampleLookaheadLength;// Offset=0x10 Size=0x4
};
