struct _RTL_RB_TREE// Size=0x10 (Id=118)
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

enum _MI_SLAB_ALLOCATOR_TYPE
{
    MiSlabAllocatorTypeSlatProtected=0,
    MiSlabAllocatorTypeUnprotected=1,
    MiSlabAllocatorTypeMax=2
};

enum _MI_SLAB_ALLOCATOR_PROTECTION
{
    MiSlabAllocatorProtectionReadExecute=0,
    MiSlabAllocatorProtectionReadOnly=1,
    MiSlabAllocatorProtectionNoAccess=2,
    MiSlabAllocatorProtectionReadWrite=3,
    MiSlabAllocatorProtectionMax=4
};

union _anonymous_1620// Size=0x4 (Id=1620)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EntryBecameEmpty:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};

enum _MMLISTS
{
    ZeroedPageList=0,
    FreePageList=1,
    StandbyPageList=2,
    ModifiedPageList=3,
    ModifiedNoWritePageList=4,
    BadPageList=5,
    ActiveAndValid=6,
    TransitionPage=7
};

struct _MMPFNLIST// Size=0x28 (Id=535)
{
    unsigned long long Total;// Offset=0x0 Size=0x8
    enum _MMLISTS ListName;// Offset=0x8 Size=0x4
    unsigned long long Flink;// Offset=0x10 Size=0x8
    unsigned long long Blink;// Offset=0x18 Size=0x8
    unsigned long long Lock;// Offset=0x20 Size=0x8
};

struct _MI_SLAB_ALLOCATOR_CONTEXT// Size=0x78 (Id=1621)
{
    struct _RTL_RB_TREE AllocationsTree;// Offset=0x0 Size=0x10
    long Lock;// Offset=0x10 Size=0x4
    struct _MI_SLAB_ALLOCATOR_ENTRY * SlabEntryHint;// Offset=0x18 Size=0x8
    unsigned long long FreePageCount;// Offset=0x20 Size=0x8
    unsigned long long SlabEntryCount;// Offset=0x28 Size=0x8
    enum _MI_SLAB_ALLOCATOR_TYPE Type;// Offset=0x30 Size=0x4
    enum _MI_SLAB_ALLOCATOR_PROTECTION Protection;// Offset=0x34 Size=0x4
    union _anonymous_1620 Flags;// Offset=0x38 Size=0x4
    struct _MMPFNLIST StandbyList;// Offset=0x40 Size=0x28
    unsigned long long LastReplenishTime;// Offset=0x68 Size=0x8
    unsigned long long LastFailureTime;// Offset=0x70 Size=0x8
};
