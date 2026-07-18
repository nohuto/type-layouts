struct _VF_AVL_TREE_NODE// Size=0x10 (Id=1598)
{
    void * p;// Offset=0x0 Size=0x8
    unsigned long long RangeSize;// Offset=0x8 Size=0x8
};

struct _VF_AVL_TREE_NODE_EX// Size=0x18 (Id=1641)
{
    struct _VF_AVL_TREE_NODE Base;// Offset=0x0 Size=0x10
    unsigned long SessionId;// Offset=0x10 Size=0x4
};

struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS// Size=0x20 (Id=1871)
{
    struct _VERIFIER_SHARED_EXPORT_THUNK * SharedExportThunks;// Offset=0x0 Size=0x8
    struct _VERIFIER_SHARED_EXPORT_THUNK * PoolSharedExportThunks;// Offset=0x8 Size=0x8
    struct _VERIFIER_SHARED_EXPORT_THUNK * OrderDependentSharedExportThunks;// Offset=0x10 Size=0x8
    struct _VERIFIER_SHARED_EXPORT_THUNK * XdvSharedExportThunks;// Offset=0x18 Size=0x8
};

struct _anonymous_1378// Size=0x4 (Id=1378)
{
    struct // Size=0x4 (Id=0)
    {
        unsigned long SnapSharedExportsFailed:1;// Offset=0x0 Size=0x4 BitOffset=0x0 BitSize=0x1
        unsigned long Spare:31;// Offset=0x0 Size=0x4 BitOffset=0x1 BitSize=0x1f
    };
};

union _anonymous_1379// Size=0x20 (Id=1379)
{
    union // Size=0x20 (Id=0)
    {
        struct _VF_TARGET_ALL_SHARED_EXPORT_THUNKS AllSharedExportThunks;// Offset=0x0 Size=0x20
        struct _anonymous_1378 Flags;// Offset=0x0 Size=0x4
    };
};

struct _VF_TARGET_DRIVER// Size=0x40 (Id=1380)
{
    struct _VF_AVL_TREE_NODE_EX TreeNode;// Offset=0x0 Size=0x18
    union _anonymous_1379 u1;// Offset=0x18 Size=0x20
    struct _VF_TARGET_VERIFIED_DRIVER_DATA * VerifiedData;// Offset=0x38 Size=0x8
};
