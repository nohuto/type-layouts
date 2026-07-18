struct _unnamed_533// Size=0x10 (Id=533)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=534)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_533 HeaderX64;// Offset=0x0 Size=0x10
};

struct _MI_KSTACK_ALLOCATIONS// Size=0x10 (Id=1683)
{
    unsigned long AllocationPeaks[4];// Offset=0x0 Size=0x10
};

struct _CACHED_KSTACK_LIST// Size=0x30 (Id=1319)
{
    union _SLIST_HEADER SListHead;// Offset=0x0 Size=0x10
    struct _MI_KSTACK_ALLOCATIONS Counters;// Offset=0x10 Size=0x10
    unsigned long CurrentIndex;// Offset=0x20 Size=0x4
    unsigned long InUseAtOnce;// Offset=0x24 Size=0x4
    unsigned long MinimumFree;// Offset=0x28 Size=0x4
    unsigned char NonIdealStacksPresent;// Offset=0x2c Size=0x1
};
