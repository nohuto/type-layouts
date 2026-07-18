struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=236)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFT_FREE_COUNTER_PARAMETERS// Size=0x20 (Id=1539)
{
    struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
    unsigned long Flags;// Offset=0x4 Size=0x4
    unsigned long TableId;// Offset=0x8 Size=0x4
    unsigned long CounterIdStart;// Offset=0xc Size=0x4
    unsigned long NumCounters;// Offset=0x10 Size=0x4
    unsigned long LastCounterValueAndStateArrayOffset;// Offset=0x14 Size=0x4
    unsigned long LastCounterValueAndStateArrayNumElements;// Offset=0x18 Size=0x4
    unsigned long LastCounterValueAndStateArrayElementSize;// Offset=0x1c Size=0x4
};
