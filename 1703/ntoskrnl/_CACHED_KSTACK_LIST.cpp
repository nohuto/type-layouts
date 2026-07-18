struct _unnamed_67// Size=0x10 (Id=67)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=68)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_67 HeaderX64;// Offset=0x0 Size=0x10
};

struct _CACHED_KSTACK_LIST// Size=0x20 (Id=1470)
{
    union _SLIST_HEADER SListHead;// Offset=0x0 Size=0x10
    long MinimumFree;// Offset=0x10 Size=0x4
    unsigned long Misses;// Offset=0x14 Size=0x4
    unsigned long MissesLast;// Offset=0x18 Size=0x4
    unsigned long AllStacksInUse;// Offset=0x1c Size=0x4
};
