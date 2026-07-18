struct _unnamed_98// Size=0x10 (Id=98)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=99)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_98 HeaderX64;// Offset=0x0 Size=0x10
};

struct _USER_MEMORY_CACHE_ENTRY// Size=0x30 (Id=584)
{
    union _SLIST_HEADER UserBlocks;// Offset=0x0 Size=0x10
    unsigned long AvailableBlocks;// Offset=0x10 Size=0x4
    unsigned long MinimumDepth;// Offset=0x14 Size=0x4
    unsigned long CacheShiftThreshold;// Offset=0x18 Size=0x4
    unsigned short Allocations;// Offset=0x1c Size=0x2
    unsigned short Frees;// Offset=0x1e Size=0x2
    unsigned short CacheHits;// Offset=0x20 Size=0x2
};
