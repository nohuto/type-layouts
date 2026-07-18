struct _RTL_AVL_TREE// Size=0x8 (Id=117)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=116)
{
    union // Size=0x10 (Id=0)
    {
        struct _RTL_BALANCED_NODE * Children[2];// Offset=0x0 Size=0x10
        struct _RTL_BALANCED_NODE * Left;// Offset=0x0 Size=0x8
        struct _RTL_BALANCED_NODE * Right;// Offset=0x8 Size=0x8
    };
    union // Size=0x1 (Id=0)
    {
        struct // Size=0x1 (Id=0)
        {
            union // Size=0x1 (Id=0)
            {
                unsigned char Red:1;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x1
                unsigned char Balance:2;// Offset=0x10 Size=0x1 BitOffset=0x0 BitSize=0x2
            };
        };
        unsigned long long ParentValue;// Offset=0x10 Size=0x8
    };
};

struct _MI_ACCESS_VIOLATION_RANGE// Size=0x28 (Id=2509)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    void * Va;// Offset=0x18 Size=0x8
    void * EndVaInclusive;// Offset=0x20 Size=0x8
};

struct _unnamed_1919// Size=0x40 (Id=1919)
{
    void * UniqueCacheLine[8];// Offset=0x0 Size=0x40
};

struct _LIST_ENTRY// Size=0x10 (Id=3)
{
    struct _LIST_ENTRY * Flink;// Offset=0x0 Size=0x8
    struct _LIST_ENTRY * Blink;// Offset=0x8 Size=0x8
};

struct _unnamed_1920// Size=0x18 (Id=1920)
{
    struct _LIST_ENTRY Links;// Offset=0x0 Size=0x10
    unsigned long Signaled;// Offset=0x10 Size=0x4
};

struct _MI_CACHE_LINE// Size=0x40 (Id=1921)
{
    union // Size=0x40 (Id=0)
    {
        struct _unnamed_1919 u1;// Offset=0x0 Size=0x40
        struct _unnamed_1920 u2;// Offset=0x0 Size=0x18
    };
};

struct _MI_CACHE_ALIGNED_ARRAY// Size=0x40 (Id=1609)
{
    union // Size=0x8 (Id=0)
    {
        long Lock;// Offset=0x0 Size=0x4
        unsigned long long Value;// Offset=0x0 Size=0x8
        long long SignedValue;// Offset=0x0 Size=0x8
        struct _MI_CACHE_LINE CacheLinePadding;// Offset=0x0 Size=0x40
    };
};

union _MI_NO_STEAL_NON_PAGED_POOL_LOG_STATE// Size=0x4 (Id=2522)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long Table0EntryIndex:11;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0xb
        unsigned long Table1EntryIndex:11;// Offset=0x0 Size=0x4 BitOffset=0xb BitSize=0xb
        unsigned long ActiveTableIndex:1;// Offset=0x0 Size=0x4 BitOffset=0x16 BitSize=0x1
    };
    unsigned long EntireState;// Offset=0x0 Size=0x4
};

struct _MI_NO_STEAL_NON_PAGED_POOL_SIZE_HISTOGRAM// Size=0x18 (Id=2369)
{
    unsigned long Histogram[6];// Offset=0x0 Size=0x18
};

struct _WORK_QUEUE_ITEM// Size=0x20 (Id=21)
{
    struct _LIST_ENTRY List;// Offset=0x0 Size=0x10
    void  ( * WorkerRoutine)(void * );// Offset=0x10 Size=0x8
    void * Parameter;// Offset=0x18 Size=0x8
};

struct _MI_POOL_STATE// Size=0x240 (Id=2228)
{
    unsigned long long MaximumNonPagedPoolThreshold;// Offset=0x0 Size=0x8
    unsigned long long AllocatedNonPagedPool;// Offset=0x8 Size=0x8
    unsigned long long AllocatedSecureNonPagedPool;// Offset=0x10 Size=0x8
    unsigned long HighEventSets;// Offset=0x18 Size=0x4
    unsigned char HighEventSetsValid;// Offset=0x1c Size=0x1
    unsigned long long LowPagedPoolThreshold;// Offset=0x20 Size=0x8
    unsigned long long HighPagedPoolThreshold;// Offset=0x28 Size=0x8
    long PermittedFaultsLock;// Offset=0x30 Size=0x4
    struct _RTL_AVL_TREE PermittedFaultsTree;// Offset=0x38 Size=0x8
    struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];// Offset=0x40 Size=0x50
    unsigned long long TotalPagedPoolQuota;// Offset=0x90 Size=0x8
    unsigned long long TotalNonPagedPoolQuota;// Offset=0x98 Size=0x8
    struct _MI_CACHE_ALIGNED_ARRAY PagedPoolWorkingSetLockArray[4];// Offset=0xc0 Size=0x100
    unsigned long long NoStealNonPagedPoolPages;// Offset=0x1c0 Size=0x8
    union _MI_NO_STEAL_NON_PAGED_POOL_LOG_ENTRY * NoStealNonPagedPoolLog;// Offset=0x1c8 Size=0x8
    union _MI_NO_STEAL_NON_PAGED_POOL_LOG_STATE NoStealNonPagedPoolLogState;// Offset=0x1d0 Size=0x4
    unsigned long NoStealNonPagedPoolLogEntriesDropped;// Offset=0x1d4 Size=0x4
    struct _MI_NO_STEAL_NON_PAGED_POOL_SIZE_HISTOGRAM NoStealNonPagedPoolSizes;// Offset=0x1d8 Size=0x18
    struct _WORK_QUEUE_ITEM NoStealNonPagedPoolLogWorkItem;// Offset=0x1f0 Size=0x20
};
