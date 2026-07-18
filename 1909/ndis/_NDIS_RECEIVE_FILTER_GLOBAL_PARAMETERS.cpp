struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_RECEIVE_FILTER_GLOBAL_PARAMETERS// Size=0x10 (Id=1530)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long EnabledFilterTypes;// Offset=0x8 Size=0x4
    unsigned long EnabledQueueTypes;// Offset=0xc Size=0x4
};
