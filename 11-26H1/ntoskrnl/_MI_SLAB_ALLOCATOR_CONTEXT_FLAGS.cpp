struct _unnamed_1640// Size=0x2 (Id=1640)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short EntryBecameEmpty:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short Spare:15;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0xf
    };
};

struct _MI_SLAB_ALLOCATOR_CONTEXT_FLAGS// Size=0x4 (Id=1641)
{
    struct // Size=0x2 (Id=0)
    {
        unsigned short DemoteInProgress:1;// Offset=0x0 Size=0x2 BitOffset=0x0 BitSize=0x1
        unsigned short PreferZeroedPages:1;// Offset=0x0 Size=0x2 BitOffset=0x1 BitSize=0x1
        unsigned short ZeroOnFree:1;// Offset=0x0 Size=0x2 BitOffset=0x2 BitSize=0x1
        unsigned short LargePageIndex:2;// Offset=0x0 Size=0x2 BitOffset=0x3 BitSize=0x2
        unsigned short Spare:11;// Offset=0x0 Size=0x2 BitOffset=0x5 BitSize=0xb
    };
    union // Size=0x2 (Id=0)
    {
        struct _unnamed_1640 InterlockedFlags;// Offset=0x2 Size=0x2
        unsigned short AllInterlockedFlags;// Offset=0x2 Size=0x2
    };
};
