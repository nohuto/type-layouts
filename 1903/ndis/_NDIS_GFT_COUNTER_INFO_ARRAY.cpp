struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=359)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFT_COUNTER_INFO_ARRAY// Size=0x18 (Id=685)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long TableId;// Offset=0x8 Size=0x4
    unsigned long CounterInfoArrayOffset;// Offset=0xc Size=0x4
    unsigned long CounterInfoArrayNumElements;// Offset=0x10 Size=0x4
    unsigned long CounterInfoArrayElementSize;// Offset=0x14 Size=0x4
};
