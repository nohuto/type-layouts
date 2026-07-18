struct _unnamed_101// Size=0x10 (Id=101)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=102)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_101 HeaderX64;// Offset=0x0 Size=0x10
};

struct _HEAP_LOCAL_DATA// Size=0x30 (Id=337)
{
    union _SLIST_HEADER DeletedSubSegments;// Offset=0x0 Size=0x10
    struct _LFH_BLOCK_ZONE * CrtZone;// Offset=0x10 Size=0x8
    struct _LFH_HEAP * LowFragHeap;// Offset=0x18 Size=0x8
    unsigned long Sequence;// Offset=0x20 Size=0x4
    unsigned long DeleteRateThreshold;// Offset=0x24 Size=0x4
};
