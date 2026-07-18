struct _RTL_RB_TREE// Size=0x10 (Id=115)
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

struct _unnamed_699// Size=0x10 (Id=699)
{
    struct _MI_SLAB_ALLOCATOR_ENTRY * AllocationHint;// Offset=0x0 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY * FreeHint;// Offset=0x8 Size=0x8
};

struct _unnamed_700// Size=0x10 (Id=700)
{
    struct _MI_SLAB_ALLOCATOR_ENTRY ** AllocationHints;// Offset=0x0 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY ** FreeHints;// Offset=0x8 Size=0x8
};

struct _unnamed_701// Size=0x20 (Id=701)
{
    union // Size=0x10 (Id=0)
    {
        struct _unnamed_699 NonIdentity;// Offset=0x0 Size=0x10
        struct _unnamed_700 Identity;// Offset=0x0 Size=0x10
    };
    struct _MI_SLAB_ALLOCATOR_ENTRY * DefragSourceEntry;// Offset=0x10 Size=0x8
    struct _MI_SLAB_ALLOCATOR_ENTRY * DefragTargetEntry;// Offset=0x18 Size=0x8
};

enum _MI_SLAB_ALLOCATOR_TYPE
{
    MiSlabAllocatorTypeSlatProtectedStart=0,
    MiSlabAllocatorTypeExecuteProtected=0,
    MiSlabAllocatorTypeReadOnlyProtected=1,
    MiSlabAllocatorTypeNoAccessProtected=2,
    MiSlabAllocatorTypeKernelShadowStackProtected=3,
    MiSlabAllocatorTypePagingProtected=4,
    MiSlabAllocatorTypeSlatProtectedLast=4,
    MiSlabAllocatorTypeSlatUnprotectedStart=5,
    MiSlabAllocatorTypeImageUnprotected=5,
    MiSlabAllocatorTypeGenericUnprotected=6,
    MiSlabAllocatorTypeNonPagedUnprotected=7,
    MiSlabAllocatorTypeIdentityUnprotected=8,
    MiSlabAllocatorTypeSlatUnprotectedLast=8,
    MiSlabAllocatorTypeMax=9
};

struct _MI_NODE_NUMBER_ZERO_BASED// Size=0x4 (Id=696)
{
    unsigned long ZeroBased;// Offset=0x0 Size=0x4
};

union _unnamed_702// Size=0x4 (Id=702)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long EntryBecameEmpty:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long DemoteInProgress:1;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1
        unsigned long PreferZeroedPages:1;// Offset=0x0 Size=0x4 BitOffset=0x2 BitSize=0x1
        unsigned long ZeroOnFree:1;// Offset=0x0 Size=0x4 BitOffset=0x3 BitSize=0x1
        unsigned long LargePageIndex:2;// Offset=0x0 Size=0x4 BitOffset=0x4 BitSize=0x2
        unsigned long Spare:26;// Offset=0x0 Size=0x4 BitOffset=0x6 BitSize=0x1a
    };
    unsigned long AllFlags;// Offset=0x0 Size=0x4
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_SLAB_ALLOCATOR_CONTEXT// Size=0xe8 (Id=703)
{
    struct _RTL_RB_TREE SlabTree;// Offset=0x0 Size=0x10
    long Lock;// Offset=0x10 Size=0x4
    struct _MI_PARTITION * Partition;// Offset=0x18 Size=0x8
    struct _unnamed_701 Hints;// Offset=0x20 Size=0x20
    void * StandbyPageCache;// Offset=0x40 Size=0x8
    void * StandbyPageList;// Offset=0x48 Size=0x8
    struct _MMPFNLIST * RepurposedStandbyPageList;// Offset=0x50 Size=0x8
    struct _LIST_ENTRY * SlabListsByIdentity;// Offset=0x58 Size=0x8
    unsigned long long FreePageCount;// Offset=0x60 Size=0x8
    unsigned long long AvailablePagesGoal;// Offset=0x68 Size=0x8
    unsigned long long ChargedPageCount;// Offset=0x70 Size=0x8
    unsigned long long SlabEntryCount;// Offset=0x78 Size=0x8
    enum _MI_SLAB_ALLOCATOR_TYPE Type;// Offset=0x80 Size=0x4
    struct _MI_NODE_NUMBER_ZERO_BASED NumaNodeIndex;// Offset=0x84 Size=0x4
    union _unnamed_702 Flags;// Offset=0x88 Size=0x4
    long ReEvaluateAllocationHint;// Offset=0x8c Size=0x4
    unsigned long SlabEntriesAllocated;// Offset=0x90 Size=0x4
    unsigned long SlabEntriesDemoted;// Offset=0x94 Size=0x4
    unsigned long SlabEntriesFailedFast;// Offset=0x98 Size=0x4
    unsigned long SlabEntriesFailedSlow;// Offset=0x9c Size=0x4
    unsigned long SlabPagesFreedNonZeroed;// Offset=0xa0 Size=0x4
    unsigned long SlabPagesCrossIdentity;// Offset=0xa4 Size=0x4
    unsigned long long LastReplenishTime;// Offset=0xa8 Size=0x8
    unsigned long long LastFailureTime;// Offset=0xb0 Size=0x8
    struct _WORK_QUEUE_ITEM ReplenishWorkItem;// Offset=0xb8 Size=0x20
    struct _LIST_ENTRY ReplenishWaitList;// Offset=0xd8 Size=0x10
};
