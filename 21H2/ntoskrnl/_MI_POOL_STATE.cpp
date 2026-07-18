struct _SINGLE_LIST_ENTRY// Size=0x8 (Id=393)
{
    struct _SINGLE_LIST_ENTRY * Next;// Offset=0x0 Size=0x8
};

struct _RTL_AVL_TREE// Size=0x8 (Id=120)
{
    struct _RTL_BALANCED_NODE * Root;// Offset=0x0 Size=0x8
};

struct _RTL_BALANCED_NODE// Size=0x18 (Id=119)
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

struct _MI_ACCESS_VIOLATION_RANGE// Size=0x28 (Id=1976)
{
    struct _RTL_BALANCED_NODE Node;// Offset=0x0 Size=0x18
    void * Va;// Offset=0x18 Size=0x8
    void * EndVaInclusive;// Offset=0x20 Size=0x8
};

struct _MI_POOL_STATE// Size=0xa8 (Id=1754)
{
    unsigned long long MaximumNonPagedPoolThreshold;// Offset=0x0 Size=0x8
    unsigned long long AllocatedNonPagedPool;// Offset=0x8 Size=0x8
    unsigned long long AllocatedSecureNonPagedPool;// Offset=0x10 Size=0x8
    struct _SINGLE_LIST_ENTRY BadPoolHead;// Offset=0x18 Size=0x8
    unsigned long HighEventSets;// Offset=0x20 Size=0x4
    unsigned char HighEventSetsValid;// Offset=0x24 Size=0x1
    unsigned long long LowPagedPoolThreshold;// Offset=0x28 Size=0x8
    unsigned long long HighPagedPoolThreshold;// Offset=0x30 Size=0x8
    long PermittedFaultsLock;// Offset=0x38 Size=0x4
    struct _RTL_AVL_TREE PermittedFaultsTree;// Offset=0x40 Size=0x8
    struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];// Offset=0x48 Size=0x50
    unsigned long long TotalPagedPoolQuota;// Offset=0x98 Size=0x8
    unsigned long long TotalNonPagedPoolQuota;// Offset=0xa0 Size=0x8
};
