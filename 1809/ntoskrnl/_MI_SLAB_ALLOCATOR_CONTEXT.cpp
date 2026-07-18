struct _RTL_RB_TREE// Size=0x10 (Id=38)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            unsigned char Encoded:1;// Offset=0x8 Size=0x1 BitOffset=0x0 BitSize=0x1
        };
        struct _RTL_BALANCED_NODE * Min;// Offset=0x8 Size=0x8
    };
};

enum _MI_SLAB_ALLOCATOR_PROTECTION
{
    MiSlabAllocatorProtectionReadExecute=0,
    MiSlabAllocatorProtectionReadOnly=1,
    MiSlabAllocatorProtectionNoAccess=2,
    MiSlabAllocatorProtectionMax=3
};

union _unnamed_1359// Size=0x4 (Id=1359)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EntryBecameEmpty:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};

struct _MI_SLAB_ALLOCATOR_CONTEXT// Size=0x48 (Id=1360)
{
    struct _RTL_RB_TREE AllocationsTree;// Offset=0x0 Size=0x10
    long Lock;// Offset=0x10 Size=0x4
    struct _MI_SLAB_ALLOCATOR_ENTRY * SlabEntryHint;// Offset=0x18 Size=0x8
    unsigned long long FreePageCount;// Offset=0x20 Size=0x8
    unsigned long long SlabEntryCount;// Offset=0x28 Size=0x8
    enum _MI_SLAB_ALLOCATOR_PROTECTION Protection;// Offset=0x30 Size=0x4
    union _unnamed_1359 Flags;// Offset=0x34 Size=0x4
    unsigned long long LastReplenishTime;// Offset=0x38 Size=0x8
    unsigned long long LastFailureTime;// Offset=0x40 Size=0x8
};
