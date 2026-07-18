struct _unnamed_542// Size=0x10 (Id=542)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=543)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_542 HeaderX64;// Offset=0x0 Size=0x10
};

struct _MI_KSTACK_ALLOCATIONS// Size=0x10 (Id=1765)
{
    unsigned long AllocationPeaks[4];// Offset=0x0 Size=0x10
};

struct _MI_NODE_NUMBER_ZERO_BASED// Size=0x4 (Id=1373)
{
    unsigned long ZeroBased;// Offset=0x0 Size=0x4
};

struct _CACHED_KSTACK_LIST// Size=0x40 (Id=1374)
{
    union _SLIST_HEADER SListHead;// Offset=0x0 Size=0x10
    struct _MI_KSTACK_ALLOCATIONS Counters;// Offset=0x10 Size=0x10
    unsigned long CurrentIndex;// Offset=0x20 Size=0x4
    unsigned long InUseAtOnce;// Offset=0x24 Size=0x4
    unsigned long MinimumFree;// Offset=0x28 Size=0x4
    struct _MI_NODE_NUMBER_ZERO_BASED LastAllocatedNode;// Offset=0x2c Size=0x4
    unsigned char NonIdealStacksPresent;// Offset=0x30 Size=0x1
};
