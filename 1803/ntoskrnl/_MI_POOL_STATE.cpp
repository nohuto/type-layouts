struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=509)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _MI_POOL_FAILURE_REASONS// Size=0x2c (Id=1695)
{
    unsigned long NonPagedNoPtes;// Offset=0x0 Size=0x4
    unsigned long PriorityTooLow;// Offset=0x4 Size=0x4
    unsigned long NonPagedNoPagesAvailable;// Offset=0x8 Size=0x4
    unsigned long PagedNoPtes;// Offset=0xc Size=0x4
    unsigned long SessionPagedNoPtes;// Offset=0x10 Size=0x4
    unsigned long PagedNoPagesAvailable;// Offset=0x14 Size=0x4
    unsigned long SessionPagedNoPagesAvailable;// Offset=0x18 Size=0x4
    unsigned long PagedNoCommit;// Offset=0x1c Size=0x4
    unsigned long SessionPagedNoCommit;// Offset=0x20 Size=0x4
    unsigned long NonPagedNoResidentAvailable;// Offset=0x24 Size=0x4
    unsigned long NonPagedNoCommit;// Offset=0x28 Size=0x4
};

struct _RTL_AVL_TREE// Size=0x8 (Id=40)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=39)
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

struct _MI_ACCESS_VIOLATION_RANGE// Size=0x28 (Id=1668)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    void * Va;// Offset=0x18 Size=0x8
    void * EndVaInclusive;// Offset=0x20 Size=0x8
};

struct _MI_POOL_STATE// Size=0x148 (Id=1414)
{
    unsigned long long MaximumNonPagedPoolThreshold;// Offset=0x0 Size=0x8
    unsigned long NonPagedPoolSListMaximum[3];// Offset=0x8 Size=0xc
    unsigned long long AllocatedNonPagedPool;// Offset=0x18 Size=0x8
    struct _SINGLE_LIST_ENTRY BadPoolHead;// Offset=0x20 Size=0x8
    unsigned long HighEventSets;// Offset=0x28 Size=0x4
    unsigned char HighEventSetsValid;// Offset=0x2c Size=0x1
    unsigned long PoolFailures[3][3];// Offset=0x30 Size=0x24
    struct _MI_POOL_FAILURE_REASONS PoolFailureReasons;// Offset=0x54 Size=0x2c
    unsigned long long LowPagedPoolThreshold;// Offset=0x80 Size=0x8
    unsigned long long HighPagedPoolThreshold;// Offset=0x88 Size=0x8
    unsigned long PagedPoolSListMaximum;// Offset=0x90 Size=0x4
    unsigned long PreemptiveTrims[4];// Offset=0x94 Size=0x10
    unsigned long long SpecialPagesInUsePeak;// Offset=0xa8 Size=0x8
    unsigned long SpecialPoolRejected[6];// Offset=0xb0 Size=0x18
    unsigned long long SpecialPagesNonPaged;// Offset=0xc8 Size=0x8
    long SpecialPoolPdes;// Offset=0xd0 Size=0x4
    unsigned long SessionSpecialPoolPdesMax;// Offset=0xd4 Size=0x4
    long PermittedFaultsLock;// Offset=0xd8 Size=0x4
    struct _RTL_AVL_TREE PermittedFaultsTree;// Offset=0xe0 Size=0x8
    struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];// Offset=0xe8 Size=0x50
    unsigned long long TotalPagedPoolQuota;// Offset=0x138 Size=0x8
    unsigned long long TotalNonPagedPoolQuota;// Offset=0x140 Size=0x8
};
