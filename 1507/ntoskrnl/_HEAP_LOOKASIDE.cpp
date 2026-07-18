struct _unnamed_60// Size=0x10 (Id=60)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=61)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_60 HeaderX64;// Offset=0x0 Size=0x10
};

struct _HEAP_LOOKASIDE// Size=0x40 (Id=999)
{
    union _SLIST_HEADER ListHead;// Offset=0x0 Size=0x10
    unsigned short Depth;// Offset=0x10 Size=0x2
    unsigned short MaximumDepth;// Offset=0x12 Size=0x2
    unsigned long TotalAllocates;// Offset=0x14 Size=0x4
    unsigned long AllocateMisses;// Offset=0x18 Size=0x4
    unsigned long TotalFrees;// Offset=0x1c Size=0x4
    unsigned long FreeMisses;// Offset=0x20 Size=0x4
    unsigned long LastTotalAllocates;// Offset=0x24 Size=0x4
    unsigned long LastAllocateMisses;// Offset=0x28 Size=0x4
    unsigned long Counters[2];// Offset=0x2c Size=0x8
};
