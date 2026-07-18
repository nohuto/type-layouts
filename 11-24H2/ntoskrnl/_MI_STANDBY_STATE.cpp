struct _unnamed_535// Size=0x10 (Id=535)
{
    struct // Size=0x10 (Id=0)
    {
        unsigned long long Depth:16;// Offset=0x0 Size=0x8 BitOffset=0x0 BitSize=0x10
        unsigned long long Sequence:48;// Offset=0x0 Size=0x8 BitOffset=0x10 BitSize=0x30
        unsigned long long Reserved:4;// Offset=0x8 Size=0x8 BitOffset=0x0 BitSize=0x4
        unsigned long long NextEntry:60;// Offset=0x8 Size=0x8 BitOffset=0x4 BitSize=0x3c
    };
};

union _SLIST_HEADER// Size=0x10 (Id=536)
{
    unsigned long long Alignment;// Offset=0x0 Size=0x8
    unsigned long long Region;// Offset=0x8 Size=0x8
    struct _unnamed_535 HeaderX64;// Offset=0x0 Size=0x10
};

struct _RTL_BITMAP// Size=0x10 (Id=13)
{
    unsigned long SizeOfBitMap;// Offset=0x0 Size=0x4
    unsigned long * Buffer;// Offset=0x8 Size=0x8
};

struct _MI_STANDBY_STATE// Size=0x160 (Id=1987)
{
    unsigned long long FirstDecayPage;// Offset=0x0 Size=0x8
    union _SLIST_HEADER PfnDecayFreeSList;// Offset=0x10 Size=0x10
    long DecayPfnLock;// Offset=0x20 Size=0x4
    struct _RTL_BITMAP DecayPfnsToBeFreed;// Offset=0x28 Size=0x10
    unsigned long DecayPfnsToBeFreedBuffer[64];// Offset=0x38 Size=0x100
    union _SLIST_HEADER PageHeatListSlist;// Offset=0x140 Size=0x10
    long PageHeatListDisableAllocation;// Offset=0x150 Size=0x4
    unsigned long TransitionPagesMadeCold;// Offset=0x154 Size=0x4
};
