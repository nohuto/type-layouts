struct _NDIS_OBJECT_HEADER// Size=0x4 (Id=239)
{
    unsigned char Type;// Offset=0x0 Size=0x1
    unsigned char Revision;// Offset=0x1 Size=0x1
    unsigned short Size;// Offset=0x2 Size=0x2
};

struct _NDIS_GFT_COUNTER_VALUE_ARRAY// Size=0x28 (Id=2030)
{
    union // Size=0xc (Id=0)
    {
        struct _NDIS_OBJECT_HEADER Header;// Offset=0x0 Size=0x4
        unsigned long Flags;// Offset=0x4 Size=0x4
        unsigned long TableId;// Offset=0x8 Size=0x4
        union <unnamed-type-StartId>// Size=0x8 (Id=7112)
        {
            unsigned long long FlowEntryId;// Offset=0x0 Size=0x8
            unsigned long CounterId;// Offset=0x0 Size=0x4
        };
        union _NDIS_GFT_COUNTER_VALUE_ARRAY::<unnamed-type-StartId> StartId;// Offset=0x10 Size=0x8
    };
    unsigned long NumCounters;// Offset=0x18 Size=0x4
    unsigned long CounterValueArrayOffset;// Offset=0x1c Size=0x4
    unsigned long CounterValueArrayNumElements;// Offset=0x20 Size=0x4
    unsigned long CounterValueArrayElementSize;// Offset=0x24 Size=0x4
};
